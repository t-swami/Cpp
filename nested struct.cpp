#include<iostream>
using namespace std;

struct student{
	int id;
	char name[20];
	float CGPA;
};
 struct section {
 	int reg;
 	struct student s1;
 	
 };
  main()
  {
  	struct section r1;
  	cout<<"Enter the section:"<<"\n";
  	cin>>r1.reg;
  	cout<<"Enter the id of student:"<<"\n";
  	cin>>r1.s1.id;
  }

