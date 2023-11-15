#include <DHT.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define motor_pin 4
#define sensor_pin 8
#define buzzer_pin 2
#define reset_pin 29
#define screen_w 128
#define screen_h 64
#define DHTTYPE DHT11

DHT dht(sensor_pin, DHTTYPE);
Adafruit_SSD1306 display(screen_w, screen_h, &Wire, reset_pin);

String message;
int text_size;


void setup() {
  Serial.begin(9600);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("allocation failed"));
    for (;;); // loop forever if library fails to initialize
  }

  display.setTextColor(SSD1306_WHITE);
  pinMode(motor_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
  digitalWrite(motor_pin, LOW);
  dht.begin();

  // buzzes when controller is turned on
  digitalWrite(buzzer_pin, HIGH);
  delay(200);
  digitalWrite(buzzer_pin, LOW);

  display.clearDisplay();
}


void loop() {
  delay(1000);
  display.clearDisplay();

  // read temp and humidity
  float humi  = dht.readHumidity();
  float temp =  dht.readTemperature(true);

  // check if any reads failed
  if (isnan(humi) || isnan(temp)) {
    message = "Help!";
  }

  // controls motor
  if (humi <= 62 && !isnan(humi) || !isnan(temp)) {
    digitalWrite(motor_pin, HIGH);
    message = "  " + String(temp) + " F   " + String(humi) + " %" + "  ~~~~~~~~~" +" motor on";
  } else {
    digitalWrite(motor_pin, LOW);
    message = "  " + String(temp) + " F   " + String(humi) + " %" + "  ~~~~~~~~~" +" motor off";
  }

  // olde dispaly configs
  while (Serial.available()) {
    delay(2);  //delay to allow byte to arrive in input buffer
    display.clearDisplay(); //clear display
  }

  if (message.length() > 0 && message.length() <= 5) { // messages between 1 and 5 characters activates text-size 3
    display.setTextSize(3);
    Serial.println("display has been updated with: " + message); // print the message in Serial monitor for feedback
  }

  if (message.length() >= 21 || message.length() > 6 &&  message.length() <= 20) { // messages longer than 21 or between 6 and 20 characters activates text-size 2
    display.setTextSize(2);
    Serial.println("display has been updated with: " + message); // print the message in Serial monitor for feedback
  }

  display.setCursor(0, 0);//start printing at top left corner 
  display.println(message); //prints the content of the message string on the display
  display.display(); //transfers the buffer to the display
  message = ""; //reset string after each print
}