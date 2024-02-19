#include<iostream>
using namespace std;
class train
{
	private:
		int a;
	public:
	void fun();
};
inline void train::fun()
{
	cin>>a;
	cout<<a;
}
main()
{
	train s1;
	s1.fun();
}
