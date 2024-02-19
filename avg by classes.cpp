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
     cout<<"Student 1 :"<<endl;
     result student1;
     result student2;
     student1.getdata();
     student1.average();
     cout<<"student 2 :"<<endl;
     student1.getdata();
     student1.average();
    }
     

