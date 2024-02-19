#include<iostream>
using namespace std;
 class rect
 {
 	private:
 		int a,l,b;
 	public:
 		     friend int areaRect(rect r,rect2 r2);    /*friend function declararion
 		                                     syntax:  friend datatype functionname (class name variable)*/
         
 	     getdata()
 		{
 			 l=5;
 			 b=2;
 			 cout<<"Lenght  = "<<l<<"\n"<<"Breadth = "<<b<<endl;
		 }
 	
 };
 class rect2{
 	private:
 		 int x,y;
 	public:
 		friend int areaRect(rect r,rect2 r2);
 		get2()
 		{
 			x=2;
 			y=4;
 			cout<<"Lenght  = "<<x<<"\n"<<"Breadth = "<<y<<endl;
		 }
 	
 };
 int areaRect(rect r,rect2 r2)                      //friend function definaton
 {
 	int ar;
 	ar= r.l*r.b;
 	cout<<"Area    = "<<ar<<endl;
 	
 }
 main()
 {
 	rect area;
 	area.getdata();
 	    rect2 parameter;
 	    rect2 area2;
 	    area2.get2();
 	    parameter.get2();
 	areaRect(area);             /*calling the friend function
                                 syntax : functionname(object name )    */
    
}
                                       
















