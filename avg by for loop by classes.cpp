#include<iostream>
using namespace std;
class result
{
	private:
		int sub1,sub2;
		float avg;
	public:
		getdata()
		{
			cout<<"Enter the subject 1 marks : ";
			cin>>sub1;
			cout<<"Enter the subject 2 marks : ";
			cin>>sub2;
		}
		average()
		{
		    avg=(sub1+sub2)/2;
		    cout<<"Subject 1 : "<<sub1<<endl<<"Subject 2 : "<<sub2<<endl;
			cout<<"Average  : "<<avg<<endl<<endl;	
		}
};
main()
    {
     result student[20];
     for(int i=0;i<5;i++)
     {
     	cout<<"Enter the marks of student "<<(i+1)<<"   : "<<endl;
		      	student[i].getdata();
		      	
	 }
	 for(int i=0;i<2;i++)
     {
     	cout<<"average marks of student "<<(i+1)<<" is  : "<<endl;
		      	student[i].average();
		      	
	 }
    }
     

