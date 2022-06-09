#include<iostream>
using namespace std;

class employee;  //pre declaring the class
class student 
{
	int reg_no;
	float cgpa;
	public:
		void get()
		{
			cout<<"Enter registration no.: ";
			cin>>reg_no;
			cout<<"Enter your CGPA: ";
			cin>>cgpa;
		}
		operator employee();
};

class employee
{
	public:
		int e_id;
		
		void print()
		{
			cout<<endl<<"Your Employee ID is: "<<e_id;	
		}
};
student::operator employee()
{
	employee ob;
	if(cgpa>7.0f)
	{
		ob.e_id=reg_no;
	}
	else
	{
		cout<<endl<<"You are not eligible";
	}
	return(ob);
}
main()
{
	student  s1;
	s1.get();
	employee e1;
	e1=s1;
	e1.print();
}
