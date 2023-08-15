#define BLYNK_TEMPLATE_ID           "TMPL6ZTow1t-g"
#define BLYNK_DEVICE_NAME           "Iot1"
#define BLYNK_AUTH_TOKEN            "R7J0vp_Tz6bDcgFWfIm4tw2b6Qv21YLH"


#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "UchuIP12";
char pass[] = "ha5379na";
#include <Adafruit_NeoPixel.h>
 Adafruit_NeoPixel pixels = Adafruit_NeoPixel(5, 4, NEO_GRB + NEO_KHZ800);

BLYNK_WRITE(V0)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    pixels.setPixelColor(0, 0x3333ff);
    pixels.setPixelColor(1, 0x3333ff);
    pixels.setPixelColor(2, 0x3333ff);
    pixels.setPixelColor(3, 0x3333ff);
    pixels.setPixelColor(4, 0x3333ff);
    pixels.show();
    pixels.show();
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,220);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,200);

  } else {
    digitalWrite(13,HIGH);
    digitalWrite(14,LOW);
    analogWrite(25,100);
    digitalWrite(18,HIGH);
    digitalWrite(19,LOW);
    analogWrite(15,100);
    pixels.setPixelColor(0, 0x000000);
    pixels.setPixelColor(1, 0x000000);
    pixels.setPixelColor(2, 0x000000);
    pixels.setPixelColor(3, 0x000000);
    pixels.setPixelColor(4, 0x000000);
    pixels.show();
    pixels.show();

  }
}

BLYNK_WRITE(V1)
{
int pinValue = param.asInt();
  if (pinValue == 1) {
    pixels.setPixelColor(0, 0x3333ff);
    pixels.setPixelColor(1, 0x3333ff);
    pixels.setPixelColor(2, 0x3333ff);
    pixels.setPixelColor(3, 0x3333ff);
    pixels.setPixelColor(4, 0x3333ff);
    pixels.show();
    pixels.show();

  }
}


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pixels.begin();

  pinMode(13,OUTPUT);
 pinMode(14,OUTPUT);
 pinMode(25,OUTPUT);
  pinMode(18,OUTPUT);
 pinMode(19,OUTPUT);
 pinMode(15,OUTPUT);
}

void loop() {
  Blynk.run();
}