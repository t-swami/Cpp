#include<iostream>
using namespace std;
main()
{
	int a,b;
	a=11;b=8;
	void swap1(int & ,int &);
	cout<<"Values of a and b before calling the function : "<<a<<" "<<b<<"\n";
	swap1(a,b);
	cout<<"Values of a and b After calling the function  : "<<a<<" "<<b<<"\n";
}
int swap1(int &x,int &y)
{
	int c;
	c=x;
	x=y;
	y=c;
    cout<<"Values of a and b  in after swapping          : "<<x<<" "<<y<<"\n";
}
