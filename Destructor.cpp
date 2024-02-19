#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b;
	public:
		abc(int x,int y)
		{
			cout<<"Const"<<endl;
		}
~abc()
{
	cout<<"Destructor"<<endl;
}
};
main()
{
	abc obj1(3,2),obj2(2,2);
}
