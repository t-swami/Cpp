#include<iostream>
using namespace std;
class rectangle
{
      int l, b ;      
   public:
   	rectangle()
   	   {
   	   	l=10;
   	   	 b=90;
   	   	 cout<<" i am default const"<<endl;
		  }
		  
   rectangle(int x, int y)
   {
   	   l=x;
   	   b=y;
   	   cout<<" i am parameterized const"<<endl;
			 }	
	
      area()
      {
      	int a;
      	a=l*b;
      	cout<<" area="<<a<<endl;
	  }			 
};
 main()
      {
  	  	     rectangle obj;	
			rectangle obj1(9,8); 
			    obj=obj1;
				     obj.area();
  }
