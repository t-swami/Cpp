#include<iostream>
using namespace std;

struct student{
	int reg;
	char name[20];
	float CGPA;
}s2;

main()
{
struct student s1={123,"Swami",9.7};
cout<<"Enter the student 2 details:"<<"\n";
cin>>s2.reg>>s2.name>>s2.CGPA;
cout<<"Reg :"<<s1.reg<<"\n"<<"Name:"<<s1.name<<"\n"<<"CGPA:"<<s1.CGPA<<"\n";

cout<<"Reg :"<<s2.reg<<"\n"<<"Name:"<<s2.name<<"\n"<<"CGPA:"<<s2.CGPA;
cout<<sizeof(s1);
}
