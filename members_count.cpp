#include<iostream>
using namespace std;

class members
{
	int s_no;
	static int count;
	public:
		void tell()
		{
			count++;
			cout<<endl<<"I am object "<<count<<endl;
			
		}
		void total()
		{
			cout<<endl<<"Total objects are: "<<count;
		}
		
		
};
int members::count;

int main()
{
	members obj1, obj2, obj3, obj4, total;
	cout<<"What is your serial number: ";
	obj1.tell();
	cout<<endl<<"What is your serial number: ";
	obj2.tell();
	cout<<endl<<"What is your serial number: ";
	obj3.tell();
	cout<<endl<<"What is your serial number: ";
	obj4.tell();
	
	total.total();

}
