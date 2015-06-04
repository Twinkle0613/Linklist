#ifndef LinkList_H
#define LinkList_H

 	struct ListElement
	{
	  struct ListElement *next;
		int value;
	};
 
	 
	struct Linkedlist
	{
	 struct ListElement *Head;
	 	struct ListElement *tail;
	}; 
	
#endif // LinkList_H
