#include<iostream> //heirical inheritance
using namespace std;
class test
{
	int noq;
	int tm;
	public:
		test ()
		{
			cout<<"Enter the number of questions: ";
			cin>>noq;
			tm = 30;
		}
		void put()
		{
			cout<<endl<<"The number of questions are: "<<noq<<endl;
			cout<<"Total marks: "<<tm<<endl;
		}
};

class sec1:public test
{
	float am;
	public:
		sec1()
		{
			am=17.5f;
		}
		void put1()
		{
			cout<<"The average marks for section 1: "<<am<<endl;
		}
		
};
class sec2:public test
{
	float am;
	public:
		sec2()
		{
			am=14.5f;
		}
		void put2()
		{
			cout<<"The average marks for section 2: "<<am<<endl;
		}
};

main()
{
	sec1 ob1;
	ob1.put();
	ob1.put1();
	
	cout<<endl;
	
	sec2 ob2;
	ob2.put();
	ob2.put2();
}
