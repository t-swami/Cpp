/*     1.default
       2.parameterized constructor
       3.copy constructor
       4.constructor overloding...ambigious
       5.default arguments
       6.
       7.
*/
#include<iostream>
using namespace std;
class rectangle
{
	int length,breadth;
	
	
            public:
	         
				rectangle(int x,int y);
				
			
	            area()
	            {
	                 int a;
		             a=length * breadth;
		             cout<<"Area = "<<a<<endl;
	            }
	            rectangle (rectangle &obj)    
	                                                                            
	            {
	            	length = obj.length;
	            	breadth = obj.breadth;
				}
};
	rectangle::rectangle(int x,int y):length(x),breadth(y)  //syntax for initialiger
	{	}
main()
{
	rectangle obj1(2,4);    

	obj1.area();
	

}
