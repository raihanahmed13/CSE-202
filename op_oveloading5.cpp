#include<iostream>
using namespace std;

class number
{
	int n;
	public:
		number()
		{
			cout<<"Enter a number: ";
			cin>>n;
		}
		void operator +()
		{
			if(n>=0)
			{
				n=n;
			}
			else
			{
				n=(-n);
			}
		}
		
		void print()
		{
			cout<<"The positive value is: "<<n;
		}
};

main()
{
	number ob;
	+ob;
	ob.print();
	
}
