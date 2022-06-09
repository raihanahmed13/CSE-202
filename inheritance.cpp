#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		void get()
		{
			y=20;
		}
		void print()
		{
			cout<<x<<endl<<y<<endl<<z<<endl;
		}
	private:
	    int y;
	protected:
	    int z;	
};
class B: public A
{
	public:
		void put()
		{
			x=10;
			get();
			z=30;
			print();
		}		
};

main()
{
	B b;
	b.put();

}
