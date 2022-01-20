#include<iostream>
using namespace std;

class A
{
	public:
		void power()
		{
			cout<<"Taking double"<<endl;
		}
		void power(int a)
		{
			cout<<"Taking int"<<endl;
		}
		void power(float b)
		{
			cout<<"Taking float"<<endl;
		}
		void power(char c)
		{
			cout<<"Taking char"<<endl;
		}
};

int main()
{
	A p1;
	p1.power();
	p1.power(5);
	p1.power(2.5f);
	p1.power('R');
}
