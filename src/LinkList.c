#include <malloc.h>
#include <stdio.h>
#include "LinkList.h"
/**
 * Using the link-list to store data , to check the link-list was functional
 * eg.
 * Head->(next/data)->(next/data)->(next/data)->NULL
 *
 * Function:
 *  struct Linkedlist createLinkedList(); 																			-to declare the head and tail point to NULL
 *  struct ListElement createLinkedElement(int value);													-to add the value to form a new element
 *  int addList( struct ListElement *newElement, struct Linkedlist *newList); 	-to link the new element into the link-list 
 * Input: 
 *  value :  store the data from user key in  
 *  newElement : create by createLinkedElement() 
 *	newList : create a head and tail
 * Return:
 *		The addList(...) function will return the value was added in by the user 
 *		to make sure the link-list is functional.
 *     
 *
 */

 
 struct Linkedlist *createLinkedList()
 {
	 struct Linkedlist *list_NULL = malloc(sizeof(struct Linkedlist));;
	//list_NULL->tail = (void*)100;
	 list_NULL->tail = NULL;
	 list_NULL->Head = NULL;

		return list_NULL;

	 
 }

 struct ListElement *createLinkedElement(int x)
  {
	  struct ListElement *newptr = malloc(sizeof(struct ListElement));
	  newptr->value = x;
	  newptr->next = NULL;
		return newptr;
	}
 
 
int addList( struct ListElement *newElement, struct Linkedlist *newList)
 {
	 
	 if(newList->Head == NULL)
		{
		       newList->Head = newElement;
					 	printf("%d\n",newList->Head->value);
		       return newList->Head->value; 
		}
	 else 
	 {
		 for(newList->tail = newList->Head; newList->tail->next!=NULL ; newList->tail = newList->tail->next );
	            newList->tail = newElement;
							printf("%d\n",newList->tail->value);
							return newList->tail->value;
	 }
	
 }
 


 