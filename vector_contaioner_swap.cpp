#include<iostream>
#include<vector>
using namespace std;

main()
{
	int i;
	double arr[]={1.1,2.2,3.3,4.4};
	vector<double> v1(arr, arr+4);
	vector<double> v2(3);
	
	cout<<"v1"<<endl;
	for(i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<endl;
	}
	
	cout<<"v2"<<endl;
	for(i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<endl;
	}
	
	v1.swap(v2);
	
	cout<<endl<<"v1"<<endl;
	for(i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<endl;
	}
	
	cout<<"v2"<<endl;
	for(i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<endl;
	}
	
}
