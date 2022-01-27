#include<iostream>
using namespace std;

class employee
{
	char name[20];
	long long int number;
	
	public:
		void getdata()
		{
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the phone number: ";
			cin>>number;
			cout<<endl;
		}
		void putdata()
		{
			cout<<endl<<"Name: "<<name;
			cout<<endl<<"Phone number: "<<number<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter the number of employees: ";
	cin>>n;
	
	if (n>0 && n<=100)
	{
		employee e[n];
	    int i;
	
	    for(i=0; i<n; i++)
	    {
	      cout<<"Employee "<<i+1<<" :"<<endl;
		  e[i].getdata();	
		}
		
	    for(i=0; i<n; i++)
	    {
	      cout<<endl<<"Employee "<<i+1<<" :";
		  e[i].putdata();	
		}	
	}
	
	else
	{
		cout<<endl<<"Enter number of employees with in the limit!";
	}	
}
