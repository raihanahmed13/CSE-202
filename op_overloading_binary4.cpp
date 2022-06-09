//overload +operation(Binary)
#include<iostream>
#include<string>
using namespace std;

class str
{
	string s;
	public:
		void get()
		{
			cout<<"Enter the strings: ";
		    getline(cin, s);
	    }
	    
	    str operator +(str &o)
	    {
	    	str ob;
	    	ob.s = s+" "+o.s;
	    	return (ob);
		}
		
		void print()
		{
			cout<<s;
		}
};

main()
{
	str s1,s2;
	s1.get();
	s2.get();
	str demo;
	demo = s1+s2;
	demo.print();
}
	    
