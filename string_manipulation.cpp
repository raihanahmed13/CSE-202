#include<iostream>
#include<string>
using namespace std;

main()
{
	string s1("We are studying object oriented programming...");
	cout<<"s1: "<<s1<<endl;
	string s2 = "c++";
	cout<<endl<<"s2: "<<s2<<endl;
	
	s1.insert(5,s2);
	cout<<"s1: "<<s1<<endl;
	
	s1.erase(5,3);
	cout<<"s1: "<<s1<<endl;
	
	s1.replace(10,4,s2);
	cout<<"s1: "<<s1<<endl;
	
	s1.append(5,'?');
	cout<<"s1: "<<s1<<endl;
	
}
