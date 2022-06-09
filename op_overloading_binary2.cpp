//overload +operation(Binary)

#include<iostream>
using namespace std;

class subject
{
	int marks;
	public:
		void get()  //contructor will be called for all the objects
		{
			cout<<"Enter the marks: ";
			cin>>marks;
		}
		subject operator +(subject &o)
		{
			subject s;
			s.marks = marks + o.marks;
			return(s);
		}
		void print()
		{
			cout<<marks;
		}
		
};
main()
{
	
	subject s1, s2;
	s1.get();
	s2.get();
	subject demo;
	demo = s1+s2;
	demo.print();
}
