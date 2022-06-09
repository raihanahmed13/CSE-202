#include<iostream>
using namespace std;

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
		int number()
		{
			return(reg_no);
		}
		float marks()
		{
			return(cgpa);
		}
};

class employee
{
	int e_id;
	public:
		employee()
		{
			
		}
		employee (student &ob)
		{
			if(ob.marks()>7.0f)
			{
				e_id=ob.number();
			}
			else
			{
				cout<<"You are not eligible!!";
			}
		}
		void print()
		{
			cout<<endl<<"Your Employee ID is: "<<e_id;	
		}
};
main()
{
	student  s1;
	s1.get();
	employee e1;
	e1=s1;
	e1.print();
}
