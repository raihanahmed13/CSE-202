#include<iostream>
using namespace std;

class sterling
{
	long pounds;
	int shillings;
	int pence;
	public:
		
		void getsterling()
		{
			cout<<"Enter amount in pounds: ";
			cin>>pounds;
			cout<<"Enter amount in shillings: ";
			cin>>shillings;
			cout<<"Enter amount in pence: ";
			cin>>pence;
			
		}
		void putsterling()
		{
			cout<<"The amount is: "<<pounds<<"."<<shillings<<"."<<pence<<endl<<endl;
		}
		
		
		int operator +(sterling &ob)
		{
			cout<<"After addition: "<<endl;
			cout<<"Pounds: ";
			return(pounds+ob.pounds);
			
		}
		
		
};

main()
{
	sterling a1,a2;
	a1.getsterling();
	a1.putsterling();
	a2.getsterling();
	a2.putsterling();
	
	cout<<a1+a2;
}
