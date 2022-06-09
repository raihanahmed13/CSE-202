#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	fstream ob("word", ios::out);
	cout<<"Enter the string: "<<endl;
	int n;
	while(1)
	{
		char c;
		cin>>c;      //Enter '.' after the string to terminate the loop
		if(c=='.')
		break;
		ob.put(c);
		n++;
	}
	
	ob.close();
	
	cout<<endl<<"The total number of words in the file: "<<n;
	
	fstream w("word", ios::in);
	cout<<endl<<endl<<"The string is: ";
	
	while(1)
	{
		char ch;
		w.get(ch);
		if(w.eof())
		break;
		cout<<ch;
	}
	
	ob.close();
	
	
	
}
