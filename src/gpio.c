
#include "gpio.h" //Defines GPIO registers
#include <stdio.h>

unsigned int *gpsel4 = 0xFE200010;
unsigned int *gpset1 = 0xFE200020;
unsigned int *gpclr1 = 0xFE20002C;

void led_init() {
	unsigned int mask_number = 0xFFFFFE3F;
	//GPIO42 initialize to output "876"->"001"
	*gpsel4 = *gpsel4 & mask_number;
	*gpsel4 = *gpsel4 | (1 << 6);
	return;
}

//Writes value "1" to turn LED on
void led_on() {
	*gpset1 = (1 << 10); 

}

//Writes values "0" to turn LED off
void led_off() {
	*gpclr1 = (1 << 10);
}

void delay() {
	unsigned int i = 0;
	for(i = 0; i < 100000; i++){
		asm("NOP");
	}
}
