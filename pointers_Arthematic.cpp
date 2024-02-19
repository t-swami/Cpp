#include<iostream>
using namespace std;
main()
{
	int x[]={1,2,3,4,5,6,7,8};
	int *a,*b,*c;
	int d =10;
	a = x+1;
	b = x+6;
	cout<<"Difference b/w them : " <<b-a<<"\n";
	cout<<"inc : "<<*a++;
}
