#include<iostream>
#include<string>
using namespace std;

main()
{
	string s1, s2;
	cout<<"Enter a string: ";
	getline(cin,s1);
	cout<<"Enter another string: ";
	getline(cin,s2);
	cout<<endl<<"s1: "<<s1<<"\t"<<"s2: "<<s2<<endl;
	
	
	int result=s1.compare(s2);
	
	if(result>0)
	{
		cout<<endl<<"s1>s2";
	}
	else if(result<0)
	{
		cout<<endl<<"s1<s2"<<endl;
	}
	else
	{
		cout<<endl<<"s1=s2";
	}
}
