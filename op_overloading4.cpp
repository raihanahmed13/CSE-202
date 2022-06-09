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
		void operator --()
		{
			--n;
		}
		
		void print()
		{
			cout<<"After the prefix decrement operation: "<<n;
		}
};

main()
{
	number ob;
	--ob;
	ob.print();
	
}
