#include<iostream>
using namespace std;

template<class T>

void swapp(T a, T b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"a= "<<a;
	cout<<endl<<"b= "<<b;
}
main()
{
	int a,b;
	cout<<"Enter the numbers: "<<endl;
	cin>>a;
	cin>>b;
	swapp(a,b);
}
