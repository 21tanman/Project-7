#include <iostream>
using namespace std;

#include "project7.h"

int main()
	{
	List2* lst = new List2;
		if(lst->IsEmpty())
			cout << "List is Empty" << endl;
		
		
		lst->PutItemT(7);
		lst->PutItemT(8);
		lst->PutItemT(9);
		lst->PutItemT(10);
		if(lst->IsEmpty())
			cout << "List is still empty" << endl;
		else
			cout << "Not Empty List" << endl;
	cout << endl;
	int length = lst->GetLength();
	cout << "Length: " << length << endl;
	lst->DeleteItemH();
	lst->Print();
	
	int item = 8;
	int pos = 0;
	int tester = 767;
	lst-> Find (item, pos);	
	cout << item << " is in position: " << pos << endl;
	cout << "First item: " << lst->GetItemH() << endl;
	lst->PutItemT(tester);
	lst->Print();
	return 0;
}
