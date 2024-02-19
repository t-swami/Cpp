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
	            rectangle()
			    {
				length = 10;
				breadth = 2;
				cout<<"Constructor called :"<<endl;
				}
				rectangle(int x,int y)
				{
					length = x;
					breadth = y;
					cout<<"I an parameterized constructor / default constructor:"<<length<<" "<<breadth<<endl;
					}
				rectangle(int x)
				{
					length = x;
					
					cout<<"single parameterized constructor :"<<length<<" "<<endl;
				}	
						
	            area()
	            {
	                 int a;
		             a=length * breadth;
		             cout<<"Area = "<<a<<endl;
	            }
};
main()
{
	rectangle obj1,obj2(2);
	obj2.area();
	

}
