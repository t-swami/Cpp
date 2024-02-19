#include<iostream>
using namespace std;
void volume(int x,int y=6,int z=8);      //2nd priority after the actual parameters
main()
{
     volume(5,4);        //Takes the values even the values are given in the declaration;
                        //Takes 3rd value from the formal parameters.
}
 void volume(int l,int b,int h)
 {
 	int vol;
 	vol = (l*b*h);
 	cout<<"Volume = "<<vol;
 }
