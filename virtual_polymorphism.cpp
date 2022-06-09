#include<iostream>
using namespace std;

class media
{
	public:
		string title;
	    float price;
		media()
		{
			cout<<"Enter the title: ";
			cin>>title;
			cout<<"Enter the price: ";
			cin>>price;
		}
		
		virtual void display()
		{
			
		}
};

class book:public media
{
	public:
		int page;
		book()
		{
			cout<<"Enter number of pages: ";
			cin>>page;
		}
		
		void display()
		{
			cout<<endl<<"Number of pages: "<<page<<endl;
		}
		
};

class tape:public media
{
	public:
		int time;
		tape()
		{
			cout<<endl<<"Enter the time in mins: ";
			cin>>time;
		}
		
		void display()
		{
			cout<<"The title is: "<<title;
			cout<<endl<<"The price is: "<<price;
			cout<<endl<<"Time: "<<time<<" mins";
		}
};

main()
{
	media m, *ptr;

	cout<<endl<<"Book"<<endl;
	book b;
	ptr=&b;
	ptr->display();
	
	cout<<endl<<"Tape"<<endl;
	tape t;
	ptr=&t;
	ptr->display();
}
