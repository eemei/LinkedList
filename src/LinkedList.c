#include "LinkedList.h"
#include "CreateListElement.h"
#include "addList.h"
#include <stdio.h>
#include <malloc.h>

/*
* create a link list 
*
* ----------
* |  tail  |---------->
* |---------       		--------
* |  head  |---add1-->|  next |.--->NULL
* |--------|     	 ---------
*                	 | value |---->NULL
*               	  --------
*
*	One way to visualize a linked list is as though it were a train.
*	The programmer always stores the first node of the list in a pointer he won't lose access to.
*	The pointer itself is the connector between cars of the train. 
*	Every time the train adds a car, it uses the connectors to add a new car. 
*	This is like a programmer using malloc to create a pointer to a new struct. 
*/



	struct LinkedList *createLinkedList(){
		struct LinkedList *list = malloc (sizeof (struct LinkedList));
		list->head = NULL;
		list->tail = NULL;
		return list;
		
	};
	

		 

	
	