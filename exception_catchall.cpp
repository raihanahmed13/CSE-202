#include<iostream>
using namespace std;

void test(int i);
main()
{
	test(-1);
	test(0);
	test(1);
}

void test(int i)
{
	try
	{
		if(i==0) 
		throw i; //true for i=0
		
		if(i==-1) 
		throw 'z';   //true for i = -1
		
		if(i==1) 
		throw 1.2;	//true for i = 1
	}
	
	catch(int a)
	{
		cout<<"Exception: Number is zero"<<endl;
	}
	
	catch(...)   //catch all
	{
		cout<<"Exception occured, please correct it"<<endl;
	}
}
