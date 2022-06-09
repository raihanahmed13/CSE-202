//overload +operation(Binary)

#include<iostream>
using namespace std;

class subject
{
	int marks;
	public:
		subject()
		{
			cout<<"Enter the marks: ";
			cin>>marks;
		}
		int operator +(subject &o)
		{
			return (marks + o.marks);
		}
		
};
main()
{
	subject s1, s2;
	cout<<s1+s2;
}
