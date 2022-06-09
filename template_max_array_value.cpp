#include<iostream>
using namespace std;

template<class T>

int amax(T arr, int size)  //change the type of the function (char, float,...)
{
	int i;
	for(i=0; i<size;i++)
	{
		if (arr[0]<arr[i])
		arr[0]=arr[i];
	}
	return arr[0];
}

main()
{
	int arr[5]; //change the type of the array (char, float,...
	int i; 
	
	cout<<"Enter the values of the array:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The values are:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	cout<<"The greatest value is: "<<amax(arr,5);
}
