#include<iostream>
#include<string>
using namespace std;

class str
{
	string s;
	public:
		void get()
		{
			cout<<"Enter the string: ";
			getline(cin,s);
		}
		friend str operator +(str &o1, str &o2);
		void print()
		{
			cout<<s;
		}
};

str operator +(str &o1, str &o2)
{
	str ob;
	ob.s=o1.s+" "+o2.s;
	return (ob);
}

main()
{
	str s1,s2;
	s1.get();
	s2.get();
	str demo;
	demo = s1+s2;
	demo.print();
}
