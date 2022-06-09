#include<iostream>
using namespace std;

class multi
{
	int n;
	public:
		multi()
		{
			cout<<"Enter the numbers: ";
			cin>>n;
		}
		
		int operator *(multi &o)
		{
			return (n*o.n);
		}
		
	
};

main()
{
	multi n1, n2;
	cout<<n1*n2;
}
