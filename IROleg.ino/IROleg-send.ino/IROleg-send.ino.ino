

#include <IRremote.h>

IRsend irsend3;

void setup()
{
}

void loop() {
	for (int i = 0; i < 3; i++) {
		irsend3.sendSony(0x20DFC03F, 3);
    irsend3.sendSony(0xFFFFFFFF, 3);
    irsend3.sendSony(0xFFFFFFFF , 3);
		delay(40);
	}
	delay(5000); //5 second delay between each signal burst
}
