#include<iostream>
using namespace std;

class employee
{
	int e_id;
	public:
		
};
class student 
{
	int reg_no;
};

class manager:public employee, public student
{
	string dept;
};

class scientist:public emplyoee, public student
{
	int pub;
};
class laborer:public emplyoee
{
	
	
};

main()
{
	manager m;
	m.put_s();
	m.put_e();
	m.put_m();
	
	cout<<endl;
	
	scientist s;
	s.put_s();
	s.put_e();
	s.put_m();
	
	cout<<endl;
	

}
