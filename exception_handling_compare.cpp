#include<iostream>
using namespace std;

main()
{
	int a,b;
	cout<<"Enter the two numbers: "<<endl;
	cin>>a;
	cin>>b;
	try
	{
		if(a<=0 || b<=0)
		{
			throw('z');
		}
		
		else
		{
			if(a>b)
			{
				cout<<a<<" is greater"<<endl;
			}
			else if(b>a)
			{
				cout<<b<<" is greater"<<endl;
			}
			else
			{
				cout<<"Both are equal"<<endl;
			}
		}
	}
	catch(char c)
	{
		cout<<endl<<"The value(s) are either negative or equal to zero"<<endl;
	}	
}

