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
		

 bool List2::IsEmpty()const
	{
		if (length==0)
				return true;
		else
				return false;
	}


int List2::GetLength() const
	{
		return length;
	}

	
void List2::PutItemT(const itemType newItem)
		{
			if(length == 0)
				{
					node* cur = new node;
					cur-> item = newItem;
					cur->next = NULL;
					head = cur;
					tail = cur;
					length++;
					return;
				}
			itemType number = newItem;
			node * pop = new node;
			node* tempVal = new node;
			pop->next = head;
				for(int i = 0; i < length; i++) //counts the length
					pop = pop-> next;						// cur item = last item, cur next = null
			pop->next = tempVal;
			tempVal->item = number;
			tempVal->next = NULL;
			tail = tempVal;
			length++;
		}


itemType List2::GetItemH() const
	{
		return head->item;
	}


itemType List2::GetItemT()
	{
		return tail->item;
	}


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

