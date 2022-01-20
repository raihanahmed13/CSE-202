#include<iostream>
using namespace std;

class admission
{
	static int total_admission;
	int reg_number;
	char course[30];
	
	public:
		void input()
		{
			cout<<"Enter the registration number ";
			cin>>reg_number;
			cout<<"Enter the course ";
			cin>>course;
			
			total_admission++;
		}
		
		static void total()
		{
			cout<<endl<<endl<<"The total number of admissions are "<<total_admission;
		}
	
};

int admission::total_admission=50;

int main()
{
	admission s1;
	s1.input();
	admission s2;
	s2.input();
	admission s3;
	s3.input();
	admission s4;
	s4.input();
	
	admission::total();
}
