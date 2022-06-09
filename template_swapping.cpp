#include<iostream>
using namespace std;

template<class T>
void swapp(T num1, T num2)
{
	T temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"num1: "<<num1<<endl;
	cout<<"num2: "<<num2<<endl;
}

main()
{
	int num1, num2;  //change the type to (char, float,...)
	cout<<"Enter num1: ";
	cin>>num1;
	cout<<endl<<"Enter num2: ";
	cin>>num2;
	
	swapp(num1,num2);
	
}
