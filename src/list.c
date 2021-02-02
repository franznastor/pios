#include <stdio.h>
#include <stdlib.h>



void list_add(struct list_element* last_elem, int new_data){
	
	if (last_elem == NULL){	
	printf("Given last node cannot be NULL");
	return;
	}

	struct list_element* new_elem = (struct list_element*) malloc(sizeof(struct list_element));
	new_elem->data = new_data;
	new_elem->next = last_elem->next;
	prev_node->next = new_elem;
} 


void list_remove(struct list_element **head_ref, int position){
	
	if (*head_ref == NULL)
	return;

	struct list_element* temp = *head_ref;

	if (position == 0){
		*head_ref = temp->next;
		free(temp);
		return;
	}
	
	for (int i = 0; temp!=NULL && i<position-1; i++)
		temp = temp->next;
	if (temp == NULL || temp->next = NULL)
	return;
	
}
	struct list_element *next = temp->next->next;
	free(temp->next);
	temp->next = next;
}
















void list_remove()
