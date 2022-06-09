#include<iostream>
#include<string>
using namespace std;

main()
{
	string s1; //default
	s1 = "We";
	cout<<"s1: "<<s1<<endl;
	
	string s2="are";
	cout<<endl<<"s2: "<<s2<<endl;
	
	string s3("studying"); //parameterized
	cout<<endl<<"s3: "<<s3<<endl;
	
	string s4;
	cin>>s4;
	cout<<endl<<"s4: "<<s4<<endl;
	
	string s5;
	cin.ignore();
	getline(cin,s5); //it will access the cin after the first space
	cout<<endl<<"s5: "<<s5<<endl;
	
	s1 = s1+" "+s2+" "+s3+" "+s4+" "+s5; //concatinating
	cout<<endl<<"s1: "<<s1<<endl;
	
	string s6(s1);  //copy
	cout<<endl<<"s6: "<<s6<<endl;
}
