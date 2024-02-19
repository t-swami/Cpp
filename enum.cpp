#include<iostream>
using namespace std;
     main() 
    {

    enum day {mon,tue,wed,Thu,Fri,sat,sun};
        cout<<"Value of sun is "<<sun<<"\n";
        day a,b,c,d;
        a=mon;
        b=tue;
        c=wed;
        cout<<a<<"\n"<<b;
        if(a<b)
        {
        	cout<<"mon comes 1st";
		}
		else
		{
			cout<<"tues comes 1st";
		}
    }
