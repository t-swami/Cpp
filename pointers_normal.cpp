#include<iostream>
using namespace std;
main()
{
	int x=10,*ptr;
	ptr = &x;
	cout<<ptr<<"\n";
	cout<<*ptr<<"\n";
	cout<<&ptr<<"\n";
	cout<<&x<<"\n";
	*ptr = 90;
	cout<<*ptr<<"\n";
	cout<<x<<"\n";
}
