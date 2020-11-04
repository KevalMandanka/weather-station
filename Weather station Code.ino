/*#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

#include <Firebase.h>
#include <FirebaseArduino.h>
#include <FirebaseCloudMessaging.h>
#include <FirebaseError.h>
#include <FirebaseHttpClient.h>
#include <FirebaseObject.h>*/


#include <LiquidCrystal_I2C.h>
#include <dht.h>
dht DHT;
#define DHT11_PIN 7

//#define FIREBASE_HOST "weather-station-704af.firebaseio.com"
//#define FIREBASE_AUTH "JOixXWtP2FfOp6FaXqubJiBt2pEITQE66UnbPc76"


LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  
  lcd.init();
  lcd.backlight();
  lcd.print("AURDINO WEATHER");
  lcd.setCursor(0,1);
  lcd.print("SYSTEM PROJECT");
  Serial.begin(9600);

}

void loop() {

  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
  
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
  lcd.print(DHT.temperature);
  lcd.print("C");
  
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Humidity:");
  lcd.print(DHT.humidity);
  lcd.print("%");
  
  //lcd.noCursor();
  delay(1000);
 // lcd.blink();
  
}
