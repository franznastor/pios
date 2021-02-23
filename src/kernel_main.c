#include <stdio.h>
#include "gpio.h"

extern long __bss_start;
extern long __bss_end;

int clear_bss() {
        //Points begin_bss to address 
        long *begin_bss = &__bss_start;
        long *end_bss = &__bss_end;
        while(begin_bss != end_bss){
                *begin_bss = 0;
                begin_bss++;
        }
        return 0;
}

void kernel_main(){
	//clear_bss();
	led_init();
	while(1) {
		led_on();
		delay(2);
		led_off();
		delay(2);
	}

}
