//pointer to data members

#include<iostream>
using namespace std;

class vote
{
	public:
		int age;
		void status()
		{
			if (age>=18)
			{
				cout<<"Welcome, You can vote"<<endl;
			}
			else
			{
				cout<<"Sorry, You are not elegible to vote"<<endl;
			}
		}
};
int main()
{
	cout<<"Voting Elegibility"<<endl<<endl;
	vote v1;
	int vote::*pa=&vote::age;  //pointer to data member outside the class
	
	cout<<"Enter the age: ";
	cin>>v1.*pa;  //cin>>v1.age;
	v1.status();
}
