#include<iostream>
using namespace std;

main()
{
	int a;
	int b;
	cin>>a;
	cin>>b;
	try
	{
		if(b!=0)
		{
			int c=a/b;
			cout<<c;
		}
		else
		{
			throw(b);
		}
	}
	
	catch(int i)
	{
		cout<<"Exception Caught: b="<<b;
	}
	
	cout<<endl<<"END";
}
