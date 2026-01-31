#include <OneWire.h>
#include <DallasTemperature.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// Pin Definitions
#define potPin A2
#define mosfetPin 3
#define tempSensorPin 8

// #define ledPin 12
#define OLED_RESET -1
Adafruit_SSD1306 display(OLED_RESET);

// Temperature sensor setup
OneWire oneWire(tempSensorPin);
DallasTemperature sensors(&oneWire);

// Variables
int potValue;
float currentTemp;
int targetTemp;
int pwmValue;

void setup() {
  pinMode(mosfetPin, OUTPUT);
  // pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  sensors.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.display();
}

void loop() {
  potValue = analogRead(potPin);
  //Serial.print("Potentiometer Value: ");
  //Serial.println(potValue);  // Read potentiometer
  sensors.requestTemperatures(); // Get temperature
  currentTemp = sensors.getTempCByIndex(0);


  //Serial.print("Current Temperature: ");
  //Serial.println(currentTemp);

  // // Decide mode based on potentiometer
  // if (potValue < 400) {
  //   targetTemp = 32;
  //   pwmValue = 250;  // mid heating power 150
  // } else if (potValue < 800) {
  //   targetTemp = 38;
  //   pwmValue = 250;  // stronger heating 200
  // } else {
  //   targetTemp = 45;
  //   pwmValue = 250;  // maximum heating 255
  // }

  //-----------
    // Decide mode based on potentiometer

  
  if (potValue < 400) {
    targetTemp = 35;
    pwmValue = 250;  // mid heating power 150
    Serial.print("Operating Mode: ");
    Serial.println("Low Heat");
  } else if (potValue < 800) {
    targetTemp = 41;
    pwmValue = 250;  // stronger heating 200
    Serial.print("Operating Mode: ");
    Serial.println("Medium Heat");
  } else {
    targetTemp = 48;
    pwmValue = 250;  // maximum heating 255
    Serial.print("Operating Mode: ");
    Serial.println("High Heat");
  }
  //----------
  
  Serial.print("Temperature: ");
  Serial.print(targetTemp);
  Serial.println(" °C");

  // Temperature Control
  if (currentTemp >= targetTemp + 5) { 
    analogWrite(mosfetPin, 0); // Too hot, turn off heating
    // digitalWrite(ledPin, LOW);
  } else if (currentTemp <= targetTemp +3) {
    analogWrite(mosfetPin, pwmValue); // Below target, heat
    // digitalWrite(ledPin, HIGH);
  } else {
    analogWrite(mosfetPin, 0); // In range, stop heating to avoid overshoot
    // digitalWrite(ledPin, LOW);
  }

  // OLED Display
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  // display.print("Pot Value: ");
  // display.println(potValue);
  // display.print("Target: ");
  // display.println(targetTemp);
  // display.print("Current: ");
  // display.println(currentTemp);

  display.println("CryothermX");
  //display.println(potValue);
  display.print("Cold mode: ");
  //display.print(targetTemp);
  display.println("8 °C");
  display.print("Low Heat mode: ");
  display.println("35 °C");
  display.print("Medium Heat mode: ");
  display.println("41 °C");
  display.print("High Heat mode: ");
  display.println("48 °C");
  //display.println(currentTemp);
  if (abs(currentTemp - targetTemp) <= 2) {
    //display.println("Temp OK");
    Serial.println("Temperature OK\n");
  } else if (currentTemp > targetTemp) {
    //display.println("Cooling...");
    Serial.println("Cooling...\n");
  } else {
    //display.println("Heating...");
    Serial.println("Heating...\n");
  }
  display.display();

  

  delay(1000); // Wait 500ms


}

















// int potPin = A0;     // Potentiometer connected to A0
// int outputPin = 9;   // Output device connected to D9 (PWM pin)

// void setup() {
//   pinMode(outputPin, OUTPUT);
// }

// void loop() {
//   int potValue = analogRead(potPin);         // Read potentiometer (0-1023)
//   int pwmValue = map(potValue, 0, 1023, 0, 255);  // Map to PWM range (0-255)
//   analogWrite(outputPin, pwmValue);          // Output PWM
// }


// potentiometer

// mosfet eke pwm digital----analogwrite

// sensor digital/ librariesss

// oled  built in function- how to display text-paranthesis



// nested ifff
// 400 400 300

// var = 
// int x = analogRead(potPin);   
// if x< 400
//     if temp is in our range
//     if not in our range tempt range
//   if it exceeds max tempt we need we put analog write to reduce mosfet gate voltage (make analog write 0)
//   it tempt sensor lesss than our value increase the gate voltage (it will not burn)
//   if it our range ask to displayy

//   after everything happened in void loopdelay ms 500

//  else if x>400 x<800

//  else 

