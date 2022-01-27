#include<iostream>
using namespace std;

class one
{
	int a;
	public:
		void get()
		{
			cout<<"Enter a numbner "<<endl;
			cin>>a;
		}
		friend class two; //class two is the friend of class one
};

class two
{
	int b;
	public:
		void print(one ob)
		{
			cout<<"Enter a number: "<<endl;
			cin>>b;
			cout<<endl;
			
			cout<<"a = "<<ob.a<<endl;
			cout<<"b = "<<b<<endl;
		}
		void sm(one ob)
		{
			int c = ob.a+b;
			cout<<endl<<"The sum is: "<<c;
		}
};

int main()
{
	one o;
	two t;
	o.get();
	t.print(o);
	t.sm(o);
	
}


