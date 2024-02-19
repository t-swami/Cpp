#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	void sum(int ,int);    //Funtion declaration "no return with parameters" 
    void display();        //funtion declaration "no return without parameters"
    
	    
	int a,b;
	a=11;b=8;
	display();   
	sum(a,b);             //Funtion call.....actual parameters
             
	
}
void display()           //defination without parameters.
{
	
	cout<<"Hi swami"<<"\n";
}

void sum(int x,int y)      //Funtion defination ...formal parameters.
{
	int c=x+y;
	cout<<"Sum = "<<c<<"\n";
	}

