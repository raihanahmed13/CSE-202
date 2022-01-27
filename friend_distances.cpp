#include<iostream>
using namespace std;

class DM
{
	int a1, a2;
	friend class DB;
	public:
		void A()
		{
			cout<<"Enter the distance in metres and centimetres: "<<endl;
			cin>>a1;
			cin>>a2;
			cout<<"The distance is: "<<a1<<" m "<<a2<<" cm"<<endl<<endl;
		}
};

class DB
{
	int b1, b2;
	public:
		void B()
		{
			cout<<"Enter the distance in feet and inches: "<<endl;
			cin>>b1;
			cin>>b2;
			cout<<"The distance is: "<<b1<<" feet "<<b2<<" inch"<<endl;
		}
		
		void add(DM ob)
		{
			float add1, add2;
			cout<<endl<<"The sum is: "<<endl;
			add1 = ob.a1 + (b1*0.3048);
			add2 = ob.a2 + (b2*30.48);
			cout<<add1<<" m "<<add2<<" cm "<<endl;
		}	
};


int main()
{
	DM d1;
	d1.A();
	DB d2;
	d2.B();
	d2.add(d1);
}
