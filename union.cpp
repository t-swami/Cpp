#include<iostream>
using namespace std;
struct student {
	int age;        //4 bytes
	float salary;   //4 bytes
};
main()
{
	struct student s1[3];   //array of objects.
     	 for (int i=0;i<3;i++)
		 {
	        cout<<"Enter the age    :";
	        cin>>s1[i].age;
            cout<<"Enter the salary :";
	        cin>>s1[i].salary;
         }
             for (int i=0;i<3;i++)
             {
	            cout<<"Age    :"<<s1[i].age<<"\n"<<"Salary :"<<s1[i].salary<<"\n";
	  
             }
}
