#include<iostream>
using namespace std;

class trip
{
	int no_of_days;
	float cost_per_person;
	public:
		trip()
		{
			no_of_days = 20;
			cost_per_person = 12000.50;
		}
		
		operator int()
		{
			return (no_of_days);
		}
		operator float()
		{
			return (cost_per_person);
		}
		
};
main()
{
	trip t1;
	int days;
	days = t1;
	cout<<"The days are: "<<days;
	float cost;
	cost = t1;
	cout<<endl<<"The cost is: "<<cost;
}
