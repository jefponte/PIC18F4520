#include <p18f4520.h>

//#pragma config OSC = INTOSCIO_EC    /// EXTERN CLOCK 8MHZ
#pragma config PBADEN=OFF


void deley_test(){
	long int i;
	for(i = 0; i < 32000; i++){}

}

void deley_metade(){
	long int i;
	for(i = 0; i < 8000; i++){}

}
void main(){
	OSCCON=0b01100010;
	ADCON1=0x0F;
	TRISB = 0b11111110;
	while(1){
		PORTB = 0b00000000;
		deley_metade();
		PORTB = 0b00000001;
		deley_metade();
		PORTB = 0b00000000;
		deley_metade();
		PORTB = 0b00000001;
		deley_metade();
		PORTB = 0b00000000;
		deley_metade();
		PORTB = 0b00000001;
		deley_test();
		PORTB = 0b00000000;
		deley_metade();
	}


}