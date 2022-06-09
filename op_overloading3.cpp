#include<iostream>
using namespace std;

class number
{
	int n;
	public:
		number()
		{
			cout<<"Enter a positive number: ";
			cin>>n;
		}
		void operator -()
		{
			n=(-n);
		}
		
		void print()
		{
			cout<<"The negative value is: "<<n;
		}
};

main()
{
	number ob;
	-ob;
	ob.print();
	
}
