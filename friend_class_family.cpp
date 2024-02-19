#include<iostream>
using namespace std;
class father;
class mother
{
	int pay,bonus,totalm;
	public:
		void getm()
		{
			pay = 50000;
			bonus = 5000;
			totalm = pay+bonus;
			cout<<"Total salary of mother is = "<<totalm<<endl;
		}
		      friend class father;
};
class father
{
	int oldSaving , total;
	public:
		void getf()
		{
			oldSaving = 100000;
			cout<<"Old savings are           = "<<oldSaving<<endl;
		}
	          void amount(mother obj)
			  {
			  	 total = oldSaving+obj.totalm;
			  	 cout<<"Total amount           = "<<total<<endl;
			  }		
};

main()
{
	mother objm;
	father objf;
	     objm.getm();
	     objf.getf();
	         objf.amount( objm );
}
