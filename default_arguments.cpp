#include<iostream>
using namespace std;

void print(int a=100, int b=200, int c=300);
int main()
{
	print(10, 20, 30);
	cout<<endl<<endl;
	print(10,20);
	cout<<endl<<endl;
	print(10);
	cout<<endl<<endl;
	print();
	
}

void print(int a, int b, int c)
{
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t";
}
