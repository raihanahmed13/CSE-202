#include<iostream>
#include<string>
using namespace std;

class company
{
	string name;
	char ranking;
	public:
		company()  //empty constructor
		{
			
		}
		
		void get()
		{
			cout<<"Enter company's name: ";
			cin.ignore();
			getline(cin, name);
		}
		
		void print()
		{
			cout<<"The company's name: "<<name<<endl;
			cout<<"The company's ranking: "<<ranking;
		}
		company(char a)
		{
			ranking = a;
		}
};

main()
{
	char status;
	cout<<"Enter the status: ";
	cin>>status;
	
	company c1;
	c1.get();
	c1=status; //basic to class
	c1.print();
}


