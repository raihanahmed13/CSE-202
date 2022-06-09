//Seats and mileage of a xyz car

#include<iostream>
using namespace std;

class vehicle
{
	public:
		int no_of_seats;
		void get()
		{
			cout<<"Enter the no of seats: ";
			cin>>no_of_seats;
		}
		
		
};

class car: public vehicle
{
	public:
		int mileage;
		void print()
		{
			get();
			cout<<endl<<"Seats= "<<no_of_seats;
			cout<<endl<<"Mileage = "<<mileage<<"kmpl";
		}
};

class xyz:public car
{
	public:
	string car_name;
	void printdata()
	{
	
		cout<<"Enter the name of car: ";
		getline(cin,car_name);
		print();
		cout<<endl<<"The Name of the car: "<<car_name;
	
		
	}
};

main()
{
	xyz c1;
	c1.mileage = 30;
	c1.printdata();

	
}
