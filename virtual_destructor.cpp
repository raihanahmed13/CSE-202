#include<iostream>
using namespace std;

class A
{
	public:
		virtual ~A()
		{
			cout<<"A"<<endl;
		}
};

class B:public A
{
	public:
		~B()
		{
			cout<<"B"<<endl;
		}
};

main()
{
	A *ptr = new B();  //child then parent (destructor sequence) 
	delete ptr;
}
