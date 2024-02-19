#include<iostream>
using namespace std;
main()
{
	int a,x,sum = 0;
	float avg;
	cout<<"Printing the sum and average of  10 numbers:"<<endl;
	cout<<"Enter the starting number:";
	cin>>a;
	x=a+10;
	while(a<=x)
	{
	sum=sum+a;
	a++;
	}
	cout<<"Sum :"<<sum<<endl;
	avg=sum/10;
	cout<<"Avg :"<<avg;
	}

