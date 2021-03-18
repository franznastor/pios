#include "list.h"
#include "rprintf.h"
#include "serial.h"
#include "page.h"
#define NULL (void*)0



void bss_to_zero();

extern int __bss_start;
extern int __bss_end;
extern struct ppage* free_list;

int global;

void kernel_main(){

	init_pfa_list();
	struct ppage* test = free_list->next;
	esp_printf(putc, "Physcial address:  %x \n", test->physical_addr);
	test = allocate_physical_pages(2);
	esp_printf(putc, "ppages -->  %x \n", test);
	esp_printf(putc, "ppages -->  %x \n", test->physical_addr);
	free_physical_pages(test);
	test = free_list->next;
	esp_printf(putc, "Freed:  %x \n", test->physical_addr);

	/*bss_to_zero();
	list_add(list, &b);
	list_add(list, &c);
	list_remove(head, 1);*/

	while (1){

	/*esp_printf(putc, "memory location: %d\r\n", kernel_main)*/
	}
}

void bss_to_zero(){
	(&__bss_start)[0] = 0x0c;
	int x=0;
	while ((&__bss_start)+x != &__bss_end){
		(&__bss_start)[x] = 0;
		x++;
	}
}
