#include<iostream>
using namespace std;
class rectangle
{
  private:
    int length,breadth,a,p;
  public:
  	void getdata();
  	void area();
  	void parameter();
  	
	  
};
        void rectangle::getdata()     // :: scope resolution operator.
        {
        	
  		cout<<"Enter the length of the rectangle   :";
  		cin>>length;
  		cout<<"Enter the breadth of thre rectangle :";
  		cin>>breadth;
		
		
		} 
		void rectangle::area()
		{
			 a=(length*breadth);	
  	         cout<<"Area     :"<<a<<endl;
	    }
	    void rectangle::parameter()
	    {
	    		p=2*(length+breadth);
  		        cout<<"parameter:"<<p;
		}
main() 
{
	rectangle a1;
	a1.getdata();
	a1.area();
	a1.parameter();
}
