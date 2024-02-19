#include<iostream>
using namespace std;
class match
{
	static int score;
	static int ps;

    	public:
    
    		
			  show()
			{
			
				cout<<"Score : "<<score<<"\n"<<"ps    :"<<ps<<"\n";
				score++;
				ps++;
				overs++;
			}
		
};
void match::getdata()
            {
    			
    			cout<<"Enter the score :";
    			cin>>score;
    			cout<<"Enter the ps    :";
    			cin>>ps;
    			
			}
main()
{
	match m1,m2;
	m1.getdata();
	m1.show();
	m2.show();
	
}
