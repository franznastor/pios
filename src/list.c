#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void list_add(struct list_element* last_elem, int new_data){
	
	/* Checks if last node is NULL*/
	if (last_elem == NULL){	
	printf("Given last element cannot be NULL");
	return;
	}

	/*Allocates new list element, loads in data for new list element,make next of new element as next of last
	element, moves next of last element as new element*/ 
	struct list_element* new_elem = (struct list_element*) malloc(sizeof(struct list_element));
	new_elem->data = new_data;
	new_elem->next = last_elem->next;
	last_elem->next = new_elem;
} 


void list_remove(struct list_element **head_ref, int position){
	/*Checks if linked list is empty*/
	if (*head_ref == NULL)
	return;
	//Stores to head node
	struct list_element* temp = *head_ref;
	//If zero position needs to be removed
	if (position == 0){
		*head_ref = temp->next;
		free(temp);
		return;
	}
	//Finds the position of the previous node to be deleted
	for (int i = 0; temp!=NULL && i<position-1; i++)
		temp = temp->next;
	//If position is more than the number of elements in the linked list
	if (temp == NULL || temp->next = NULL)
	return;
}
	
	struct list_element *next = temp->next->next;
	free(temp->next);
	temp->next = next;
}










void list_remove()
