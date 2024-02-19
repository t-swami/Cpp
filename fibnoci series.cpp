#include<iostream>
using namespace std;
class fibnoci
{
    private:
	    int a,b,c,n;
	public:
	    int i;
	    getdata()
	    {
	    	cout<<"Enter the number of places to be display :";
	    	cin>>n;
	    	cout<<"Enter the 1st 2 numbers :";
	        cin>>a>>b;
		}
	    
	    series()
	    {   
	    	cout<<a<<endl<<b<<endl;
	    	for(i=2;i<n;i++)
	    	{
	    		c=a+b;
	    		cout<<c<<endl;
	    		a=b;
	    		b=c;
			}
		}
};
main(){
	fibnoci s1;
	s1.getdata();
	s1.series();
}
