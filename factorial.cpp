#include<iostream>
using namespace std;

int main()
{
	int num,i, fact=1;
	cout<<"Enter the number: ";
	cin>>num;
	
	/*while (num>0)
	{
		fact = fact*num;
		num--;
	}*/
	
	for (i=1; i<=num; i++)
	{
		fact = fact*i;
	}
	cout<<"\nFactorial of "<<num<<" is "<<fact; 
	
}
