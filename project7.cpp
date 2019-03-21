#include <iostream>
#include <cstring>
using namespace std;

#include "project7.h"

List2::List2()
	{
		head = NULL;
		tail = NULL;
		length = 0;
	}

	List2::~List2()
		{
			delete head;
			delete tail;
		}
		
		
/*
pre: an instance of lists exists
post: returns true if list lo is empty, false otherwise
*/ 

 bool List2::IsEmpty()const
	{
		if (length==0)
				return true;
		else
				return false;
	}

/*
pre: an instance of list exists
post: returns length of the list 
*/
int List2::GetLength() const
	{
		return length;
	}

void List2::PutItemH(const itemType newItem)
	{
		node* cur = new node;
		cur-> item = newItem;
		cur-> next = head;
		head = cur;
		length++;
		cur = NULL;
		delete cur;
		
	}
	
void List2::PutItemT(const itemType newItem)
		{
			itemType number = newItem;
			cout << "newItem: " << newItem << endl;
			node * pop = new node;
			cout << "cur next: " << pop-> next<< endl;
			node* tempVal = new node;
			pop->next = head;
			for(int i = 0; pop->next!= NULL; i++) //counts the length
				pop = pop-> next;						// cur item = last item, cur next = null
			cout << "cur next 2x" << pop->next;	
			cout << " cur item testx" << pop-> item;	
			cout << "numberx" << number;	
			pop->next = tempVal;
			tempVal->item = number;
			tempVal->next = NULL;
			tail = tempVal;
			length++;
			cout << "tempVal item:" << tempVal->item;
		}


/*
pre: an instance of list exists and is not empty
post: Returns the contents of the head of the list. 
*/
itemType List2::GetItemH() const
	{
		return head->item;
	}

itemType List2::GetItemT()
	{
	return tail->item;
	}
/*
pre: an instance of list exists and is not empty
post: head of the list is deleted 
*/
void List2::DeleteItemH()
	{
		node* cur = head;
		head = head->next;
		delete cur;
		length--;
	}

void List2::Print() 
	{
		node* now = new node;
		now = head;
		int counter = 0;
		while(counter < length)
			{
				cout << now->item << endl;
				now = now->next;
				counter++;	
			}
		delete now;
	}




bool List2::Find(itemType item, int& pos)
	{
		int length = 0;
		node* cur = new node;
		cur->next = head;

		for(int i = 0; cur->next != nullptr; i++) //counts the length
			{
				cur = cur-> next;
				length++;
			}
		cur->next = head;
		int i = 0;
		while(i<length)
			{
			if(cur->item == item)
				{
					pos = i;
					return true;
				}
				else
					{
						i++;
						cur = cur->next;
					}
			}
		pos = -1;
		return false;

				
					
	}

