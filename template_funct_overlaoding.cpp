#include<iostream>
using namespace std;

template<class T1, class T2>
void print(T1 a, T2 b)
{
	cout<<"a: "<<a<<"\t";
	cout<<"b: "<<b<<endl;
}

void print(int x, int y)
{
	cout<<"x: "<<x<<"\t";
	cout<<"y: "<<y<<endl;
}
main()
{
	print(10,20);
	print('a',15);
	print('z', 'A');
	print(3.2, 8);
}
