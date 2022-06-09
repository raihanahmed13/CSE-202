#include<iostream>
using namespace std;

class demo
{
	int x,y;
	public:
		void set()
		{
			this->x = 10;  //x=10;
			this->y = 20;
		}
		void setx(int x)
		{
			this->x = x;
		}
		void put()
		{
			cout<<this->x<<endl; //cout<<x;
			cout<<this->y<<endl;
		}
};

main()
{
	demo d;
	d.set();
	d.put();
	
	d.setx(100);
	d.put();
}
