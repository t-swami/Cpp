#include<iostream>
using namespace std;
class fibnoci
{
    private:
	    int a,b,c,n;
	public:
        void getdata();       // declared in the class
        void series();
	    
	   
};
 void fibnoci::getdata()     // defined outside the class
	    {
	    	cout<<"Enter the number of places to be display :";
	    	cin>>n;
	    	cout<<"Enter the 1st 2 numbers :";
	        cin>>a>>b;
		}
  void fibnoci::series()
	    {   
	    	cout<<a<<" "<<b<<" ";
	    	for(int i=2;i<n;i++)
	    	{
	    		c=a+b;
	    		cout<<c<<" ";
	    		a=b;
	    		b=c;
			}
		}
main(){
	fibnoci s1;
	s1.getdata();
	s1.series();
}
