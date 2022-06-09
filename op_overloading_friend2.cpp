#include<iostream>    //wrong
using namespace std;

class number
{
	int a;
	
	public:
		number()
		{
			cout<<"Enter the value of a: "<<endl;
			cin>>a;
		}
		
		friend void &(number &o);
		
		void print()
		{
			cout<<"The address of a: "<<this;
		}
};

void operator &(number &o)
{
	o.a = this->a;
}

main()
{
	number ob;
	&ob;
	ob.print();
}

