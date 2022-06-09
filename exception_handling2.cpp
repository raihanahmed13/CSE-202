#include<iostream>
using namespace std;

main()
{
	next: int age;
	cout<<"Enter the age: ";
	cin>>age;
	try
	{
		if(age>=18)
		{
			cout<<"You can vote!!";
		}
		else
		{
			throw(age);
		}
		
	}
	catch (int a)
	{
		cout<<"You are not eligible!!"<<endl;
		cout<<"Next please-"<<endl;
		goto next;
	}
}
