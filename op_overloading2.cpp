//overload ++ operator(unary), operator function is member function
#include<iostream>
using namespace std;

class rgister
{
	int count;
	public:
		rgister() //constructor for initializing the data member
		{
			count=5;
		}
		void operator ++(int)  //member function
		{
			count++;
		}
		void print()
		{
			cout<<"The number of registration are: "<<count<<endl;
		}
};
main()
{
	rgister ob;
	ob++; //ob.operator++()
	ob.print();
}

