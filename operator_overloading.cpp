//overload ++ operator(unary), operator function is member function
#include<iostream>
using namespace std;

class rgister
{
	int count;
	public:
		rgister()
		{
			count=5;
		}
		void operator ++()  //member function
		{
			++count;
		}
		void print()
		{
			cout<<"The number of registration are: "<<count<<endl;
		}
};
main()
{
	rgister ob;
	++ob; //ob.operator++()
	ob.print();
}

