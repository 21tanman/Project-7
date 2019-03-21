#include <iostream>
using namespace std;

#include "project7.h"

int main()
	{


	List2* lst = new List2;
		if(lst->IsEmpty())
			cout << "List is Empty" << endl;
		
		lst->PutItemH(4);
		lst->PutItemH(5);
		lst->PutItemH(6);
		lst->PutItemH(7);
		lst->PutItemH(8);
		lst->PutItemH(9);
		if(lst->IsEmpty())
			cout << "List is still empty" << endl;
		else
			cout << "Not Empty List" << endl;

	int length = lst->GetLength();
	cout << "Length: " << length << endl;
	//lst->DeleteItemH();
	lst->Print();
	
	int item = 5;
	int pos = 0;
	int tester = 767;
	lst->Find(item, pos);
	cout << "Position: " << pos << endl;
	cout << "First item: " << lst->GetItemH() << endl;
	lst->PutItemT(tester);
	lst->Print();


	//cout << "Tail test " << lst->GetItemT();





	return 0;
}


/*	void List2::PutItemT(const itemType newItem)
		{
			node*cur = new node;
			cur->item = newItem;
			cur->next = nullptr;
			tail->next = cur;
			tail = cur;
			length++;
		}
*/
