//overloading = operator
#include<iostream>
using namespace std;

class assign
{
	char group;
	public:
		void get()
		{
			cout<<"Enter the group: ";
			cin>>group;
		}
		void operator =(assign &ob)
		{
			group = ob.group;  //n = o.n
		}
		void print()
		{
			cout<<"The assigned group is: "<<group<<endl;
		}
};
main()
{
	assign s1,s2;
	
	s1.get();
	s2=s1; //s2.operator = (s1)
	
	cout<<"\nFor S1\n";
	s1.print();
	
	cout<<"\nFor S2\n";
	s2.print();
	
}
