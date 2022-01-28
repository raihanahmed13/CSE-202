#include<iostream>
using namespace std;

class M
{
	int x, y;

	public:
		void set_xy(int a, int b)
		{
			x=a;
			y=b;
		}
		friend void sum(M ob);
};

void sum(M ob)
{
	int M::*p1 = &M::x;
	int M::*p2 = &M::y;
	int add = ob.*p1+ob.*p2; 
	cout<<add;
}
int main()
{
	int a, b;
	cout<<"Enter the values of a and b: "<<endl;
	cin>>a;
	cin>>b;
	M a1;
	a1.set_xy(a, b);
	cout<<"The sum is:"<<endl;
	sum(a1);
}
