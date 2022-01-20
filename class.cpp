#include<iostream>
using namespace std;

class student
{
		int reg;
		char grade;
		float cgpa;
	public:
		void getdata() //inline functions: declare+defined inside class
		{
			cout<<"Enter the student details:\n";
			cout<<"Registration Number: ";
			cin>>reg;
			cout<<"Grade: ";
			cin>>grade;
			cout<<"CGPA: ";
			cin>>cgpa;	
		}
		
		void putdata();	//declaration
		
};

void student::putdata() //defination
{
	cout<<endl<<"The student details are:\n";
	cout<<"Registration Number: "<<reg<<endl;
	cout<<"Grade: "<<grade<<endl;
	cout<<"CGPA: "<<cgpa<<endl;
}
int main()
{
	student s1; //class_name  object_name
	s1.getdata();  //getdata for s1 object
	s1.putdata();  //putdata for s1 object
	
}


