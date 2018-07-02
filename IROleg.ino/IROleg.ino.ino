/*
 * IRremote: irrecv3Demo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * http://arcfn.com
 */
/* lg55 
	
  20DF3EC1 - home
  20DF40BF - v+
  20DFC03F - v-
  FFFFFFFF - more last command

 */
#include <IRremote.h>

//int RECV_PIN = 11;

IRrecv irrecv3(11);

decode_results res3;

void setup()
{
  Serial.begin(9600);
  irrecv3.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv3.decode(&res3)) {
    Serial.println(res3.value, HEX);
    irrecv3.resume(); // Receive the next value
  }
  delay(100);
}
