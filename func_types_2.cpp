#include<iostream>
using namespace std;
main()
{ 
     int a;
	int fun();                //with return type and no parameters
	char name();   
	
	 a=fun();
	 
	 cout<<"Outside the function z = "<<a<<"\n";
	 cout<<"Name = "<<name();
	
	
}
 int fun()
 {
 	int x,y,z;
 	x=11;y=8;
 	z=x+y;
 	cout<<"Inside the function z = "<<z<<"\n";
 	return z;
 }
 char name()
 {
 	char a='p';
      return a;
 }
