#include<iostream>
using namespace std;
class add
{
	int a;
	int b;
	friend void print(add);
	public:
		void get()
		{
			cout<<"Enter two numbers: "<<endl;
			cin>>a;
			cin>>b;
		}
		void sm()
		{
			int c=a+b;
			cout<<endl<<"The sum is: "<<c<<endl;
		}
	
};
void print(add ob)
{
	cout<<endl<<"a = "<<ob.a<<endl;
	cout<<endl<<"b = "<<ob.b<<endl;
}

int main()
{
	add s;
	s.get();
	print(s);
	s.sm();
	
}

