//Array as data member & object

#include<iostream>
using namespace std;

class student
{
	int reg_no;
	int m[5];
	public:
		void get()
		{
			cout<<"Enter the registration number: ";
			cin>>reg_no;
			cout<<endl<<"Enter the marks of 5 subjects: "<<endl;
			int i;
			for(i=0; i<5; i++)
			{
				cout<<"Subject "<<i+1<<" :";
				cin>>m[i];
			}
		}
		void print()
		{
			cout<<endl<<"Registration number: "<<reg_no;
			cout<<endl<<"The marks of 5 subjects: "<<endl;
			int i;
			for(i=0; i<5; i++)
			{
				cout<<"Subject "<<i+1<<" :";
				cout<<m[i]<<endl;
			}
		}
	
};
int main()
{
	int n;
	cout<<"Enter the number of students: ";
	cin>>n;
	cout<<endl;
	
	student s[n];
	int i;
	for(i=0; i<n; i++)
	{
		cout<<"Student "<<i+1<<" :"<<endl;
		s[i].get();
		s[i].print();
		cout<<endl;
	}
}

