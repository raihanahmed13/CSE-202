#include<iostream>
using namespace std;

template<class T>
float avg(T arr, int size)
{
	int i;
	int sum =0;
	for(i=0; i<size; i++)
	{
		sum = sum+arr[i];
	}
	float a = sum/(float)size;
	return a;
}

main()
{
	int a[5]={10,20,30,40,50};
	cout<<"The average is "<<avg(a,5);
	
}
