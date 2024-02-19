#include<iostream>
using namespace std;
class sum
{
		  int a,b;
   
	     public:
	     
	     	getdata()
	     	{
	     		cout<<"Enter the a and b values : ";
	     		cin>>a>>b;
	     		add(a,b);
			 }
		 int  add(int ,int);
		 	
};
int sum::add(int x,int y)
{
	int z=x+y;
	cout<< "Value : "<<z<<"\n";
	return z;
}
main()
{
	sum s1;
	cout<<"Returned value : "<<s1.getdata();

}
