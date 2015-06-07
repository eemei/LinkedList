#include "CreateListElement.h"
#include "LinkedList.h"
#include "addList.h"
#include <stdio.h>
#include <malloc.h>


	struct ListElement *createListElement (int value){
		struct ListElement *elem = malloc (sizeof (struct ListElement));
		elem ->value = value ;
		elem->next = NULL;
		return elem;
	};