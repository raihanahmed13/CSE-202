#include<iostream>
#include<string>
using namespace std;

class employee
{
	int e_id;
	public:
		employee()
		{
			cout<<"Enter the emplyoee id: ";
			cin>>e_id;
		}
		void put_e()
		{
			cout<<"The employee id is: "<<e_id<<endl;
		}
};

class student
{
	int r_no;
	public:
		student()
		{
			cout<<"Enter the registration no.: ";
			cin>>r_no;
		}
		void put_s()
		{
			cout<<"The registration no. is: "<<r_no;
		}
};

class person:public employee,public student
{
	string name;
	public:
		person()
		{
			cout<<"Enter the name: ";
			cin>>name;
		}
		void put_n()
		{
			cout<<endl<<"The name is: "<<name;
		}
};

main()
{
	person p;
	p.put_e();
	p.put_s();
	p.put_n();

}
