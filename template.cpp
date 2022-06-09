#include<iostream>
using namespace std;

template<class T>

void sum(T a, T b)  //both need to be same type
{
	cout<<a+b<<endl;
}
main()
{
	sum(3,7);
	sum(3.5,4.5);
	sum(2.5f, 3.6f);
}
