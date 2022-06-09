#include<iostream>
using namespace std;

class number
{
	int n;
	public:
		number()
		{
			cout<<"Enter a positive: "<<endl;
			cin>>n;
		}
		
		friend void operator -(number &o); //friend function
		
		void print()
		{
			cout<<"The negative number is: "<<n<<endl;
		}
};

void operator -(number &o)
{
	o.n = (-o.n);
}

main()
{
	number ob;
	-ob;
	ob.print();
}
