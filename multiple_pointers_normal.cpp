#include<iostream>
using namespace std;
main()
{
	int x=10,*ptr,**ptr1,***ptr2;
	ptr = &x;
	ptr1 = &ptr;
	ptr2 = &ptr1; 
	cout<<x<<"\n";
	cout<<*ptr<<"\n";
	cout<<*ptr1<<"\n";
	cout<<*ptr2<<"\n";
	cout<<**ptr1<<"\n";
	cout<<***ptr2<<"\n";
	
}
