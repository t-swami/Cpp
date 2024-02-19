#include<iostream>
using namespace std;
main()
{
    int fact(int );
    int n,factorial;
    n=5;
    factorial = (fact(n));
    cout<<"Factorial = "<<factorial;
}  

int fact(int x)
{
	int y;
	if(x<=1)
	{
		return 1;
	}
	else
	{
		y=x*fact(x-1);
	}
	return y;
}
