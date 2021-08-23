
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "bc17ae377e034ce9aab7bba70874dc7d"; //You will get this Auth Token in Gmail if you signin Blynk app with your Gmail ID

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "My ASUS"; //Enter your WIFI Name
char pass[] = "varu1234";//Enter your WIFI Password

void setup()
{
  // not necassory
  Serial.begin(9600);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);

  //digitalWrite(D1,HIGH);
  //digitalWrite(D2,HIGH);
  //digitalWrite(D3,HIGH);
  //digitalWrite(D4,HIGH);
  
  

  Blynk.begin(auth,ssid,pass);
 
}

void loop()
{
  Blynk.run();
}
 
