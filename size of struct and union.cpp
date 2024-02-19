//program for find the size of the struct and union
#include<iostream>
using namespace std;
struct voter{
	char name[20];
	int age ;
};
union vote{
	char name[20];
	int age;
};
main()
{
	struct voter v1;
	cout<<"Size of struct:"<<sizeof(v1)<<"\n";
	union vote v2;
	cout<<"Size of union :"<<sizeof(v2);
}
