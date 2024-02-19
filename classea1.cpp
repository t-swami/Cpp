#include<iostream>
using namespace std;
class first 
{
	private:
		int x,y;
    public:
    	int w;
    	void getdata()
    	     {
    	     	cout<<"Enter the values of x :";
				cin>>x;
				cout<<"Enter the values of y :";
    	        cin>>y;
		     }
	    void showdata()
	         {
	         	cout<<"x="<<x<<"\n"<<"y="<<y;		
			 }
};
    main()
    {
     first obj;
        obj.w=10;
        obj.getdata();
        obj.showdata();
        cout<<obj.w;
    }
