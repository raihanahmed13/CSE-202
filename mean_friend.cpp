#include<iostream>
using namespace std;

class sample
{
	int num1, num2, num3;
	friend void mean(sample);
	public:
		void get()
		{
			cout<<"Enter the values: "<<endl;
			cout<<"num1 = ";
			cin>>num1;
			cout<<"num2 = ";
			cin>>num2;
			cout<<"num3 = ";
			cin>>num3;
			
		}
};
void mean(sample ob)
{
	cout<<endl<<"The mean is: "<<endl;
	cout<<(ob.num1+ob.num2+ob.num3)/3;
	
}

int main()
{
	sample m;
	m.get();
	mean(m);
}
