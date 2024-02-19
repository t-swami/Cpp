#include<iostream>
using namespace std;
    namespace first
     {
    	int a=10;
    	int b=20;
     }
    namespace second
     {
        int a=20;
	    int b=10;
     }
main()                 //:: scope resolution operator 
{
	
	cout<<first::a<<"\n";

	cout<<second::a<<"\n";
	
	cout<<first::b;
	cout<<second::b;
}
