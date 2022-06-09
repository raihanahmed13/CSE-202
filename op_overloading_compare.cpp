#include<iostream>
using namespace std;

class student
{
	int marks;
	public:
		void get()
		{
			cout<<"Enter the marks: ";
			cin>>marks;
		}
		
		friend int operator >(student &o1, student &o2);
};
int operator >(student &o1, student &o2)
{
	if(o1.marks>o2.marks)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}


main()
{
	student s1,s2;
	s1.get();
	s2.get();
	
	int n = s1>s2;
	if (n==1)
	{
		cout<<"Student S1 is topper.";
	}
	else
	{
		cout<<"Student S2 is topper";
	}
}
