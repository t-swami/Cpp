#include<iostream>
using namespace std;
int fun(int);
main()
{
	fun(5);
	
}
int fun(int x)
{
	cout<<"x = "<<x<<"\n";
	fun(4);
}
