#include<iostream>
using namespace std;

void divide(double x, double y);

main()
{
	cout<<"Main"<<endl;
	double d;
	try
	{
		divide(20.0,0.0);
	}
	catch(double i)
	{
		cout<<"Enter the denominator other than 0"<<endl;
		cin>>d;
		divide(20.0,d);  //if we take again d=0.0 it will not rethrow again
	}
}

void divide(double x, double y)
{
	cout<<"Inside the function"<<endl;
	
	try
	{
		if(y==0.0)
		{
			throw y;
		}
		
		else
		{
			cout<<"Division= "<<x/y<<endl;
		}
		
	}
	
	catch(double a)
	{
		cout<<"Exception: Denominator is zero"<<endl;
		throw;    //rethrow to the outer catch block which is inside the main()
	}
}
