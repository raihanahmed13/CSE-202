//pointer to data members

#include<iostream>
using namespace std;

class vote
{
	int age;
	public:
		void getage()
		{
			int *pa=&age;  //pointer to data member inside the class
			cout<<endl<<"Enter your age: ";
			cin>>*pa;
		}
		
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
	cout<<"Voting Elegibility "<<endl<<endl;
	int n;
	cout<<"Enter the number of people: ";
	cin>>n;
	vote v[n];
	int i;
	for (i=0; i<n; i++)
	{
		v[i].getage();
		v[i].status();
	}
}
