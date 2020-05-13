#include <Ultrasonic.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 13
Ultrasonic ultrasonic(12,13);
const byte intPin=6; //interrupt pin

void setup() {
attachInterrupt(6, int0, RISING); //assign int0
Serial.begin(9600);
}
void loop() {

}
void int0() { 
float cmMsec, inMsec;

cmMsec = ultrasonic.read(CM); // 計算距離，單位: 公分
inMsec = ultrasonic.read(INC); // 計算距離，單位: 英吋

Serial.print("CM: "); 
Serial.print(cmMsec);
Serial.print(", IN: "); 
Serial.println(inMsec);
delay(1000);
}
