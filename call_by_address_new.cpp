#include<iostream>
using namespace std;

class swapp
{
	public:
		int num1, num2;
		void check(int &a, int &b)
		{
			cout<<"Before swap"<<endl;
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			
			int c = a;
			a = b;
			b = c;
			
			cout<<"After swap"<<endl;
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;		
		}
		void print()
		{
			cout<<"num1 = "<<num1<<endl;
			cout<<"num2 = "<<num2<<endl;	
		}
	
};

int main()
{
	swapp s;
	s.num1 = 10;
	s.num2 = 20;
	s.print();
	s.check(s.num1, s.num2);
	s.print();
	
}
