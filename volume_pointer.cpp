#include<iostream>
using namespace std;

class box
{
	int length, width, heigth;
	public:
		void getvalues()
		{
			cout<<endl<<"Lenght = ";
			cin>>length;
			cout<<"Width = ";
			cin>>width;
			cout<<"Heigth = ";
			cin>>heigth;		
		}
		
		void volume()
		{
			int volume;
			volume = length*width*heigth;
			cout<<endl<<"Volume = "<<volume;	
		}
};
int main()
{
	cout<<"Enter the dimensons of the box: ";
	
	box b1;
	
	void(box::*p1)() = &box::getvalues;
	(b1.*p1)();
	
	void(box::*p2)() = &box::volume;
	(b1.*p2)();
}
