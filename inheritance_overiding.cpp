#include<iostream>
using namespace std;

class base
{
	public:
		void print()
		{
			cout<<"Base class"<<endl;
		}
};
class derived:public base
{
	public:
		void print()
		{
			cout<<"Derived class"<<endl;
		}
};

main()
{
	derived d; //same function is there then class of the function will be given preference
	d.print();
	d.base::print();
}

