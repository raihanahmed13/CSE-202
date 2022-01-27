#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter a value: \n";
	cin>>number;
	
	cout<<"number = "<<number<<endl;
	
	int &n = number;
	cout<<endl<<"After using reference: "<<endl;
	cout<<"number = "<<number<<endl;
	cout<<"number = "<<n;
	
	
}
