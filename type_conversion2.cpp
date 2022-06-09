#include<iostream>
using namespace std;

class time
{
	int hrs;
	int mins;
	public:
		time()
		{
			
		}
		time(int ti)
		{
			hrs = ti/3600;
			mins = ti/60;
		}
		void print()
		{
			cout<<"\nThe time is "<<hrs<<" hours "<<mins<<" minutes";
		}
	
};

main()
{
	int seconds;
	cout<<"What is the time: ";
	cin>>seconds;
	
	time t;
	t=seconds;
	
	t.print();
}
