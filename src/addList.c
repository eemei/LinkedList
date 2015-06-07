#include "addList.h"
#include "LinkedList.h"
#include "CreateListElement.h"
#include <stdio.h>
#include <malloc.h>

void addList (struct ListElement *newElement , struct LinkedList *newLinkedList ){
		
		
		if (newElement == 0){
			printf ("error: storage full\n");
		}
		
		if (newLinkedList->tail == NULL && newLinkedList->head == NULL) {
			newLinkedList->head = newElement;
			newLinkedList->tail = newElement;
			newElement->next= NULL;
			printf ("[@ %d] -> ", newElement->value);
		}
		
		else {
			newLinkedList->tail = newElement;
			printf ("[@ %d] -> ", newElement->value);
			newLinkedList->tail= newElement;
		}
			
}