#include<iostream>
using namespace std;
class demo
{
	public:
		void check()
		{
			cout<<"Address of v1 "<<this<<endl;
		}
};

main()
{
	demo v1;
	cout<<"Object 1: "<<endl;
	cout<<"Address using object: "<<&v1<<endl;
	v1.check();
	
	demo v2;
	cout<<"Object 2: "<<endl;
	cout<<"Address using object: "<<&v2<<endl;
	v2.check();
}
