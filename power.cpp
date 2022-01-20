#include<iostream>
using namespace std;

void power(double n, double result, int p=2);

int main()
{
	double n, result;
	int p;
	
	cout<<"Enter the number: "<<endl;
	cin>>n;
	cout<<"Enter the power: "<<endl;
	cin>>p;
	
	power(n, result, p);
}
void power(double n, double result, int p)
{
	int i;
	for(i=1; i<p; i++)
	{
		n=n*n;
	}
	result = n;
	cout<<"The result value is: "<<result;
}

