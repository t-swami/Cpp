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
					cout<<"I an parameterized constructor :"<<length<<" "<<breadth<<endl;
					}
			
	            area()
	            {
	                 int a;
		             a=length * breadth;
		             cout<<"Area = "<<a<<endl;
	            }
	            rectangle (rectangle &obj)    //syntax of coping the constructor:(className(className &variable)
	                                                                            
	            {
	            	length = obj.length;
	            	breadth = obj.breadth;
				}
};
main()
{
	rectangle obj2(2,4),obj1(obj2);    /*same also
	                                    rectangle obj1=obj2;*/

	obj1.area();
	obj2.area();
	

}
