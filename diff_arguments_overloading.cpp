#include<iostream>
using namespace std;

class basic
{
	public:
		void print()
		{
			cout<<"Just a print function"<<endl;
		}
		void print(int a)
		{
			cout<<"Print function with single integer"<<endl;
		}
		void print(float b)
		{
			cout<<"Print function with single float argument"<<endl;
		}
};
int main()
{
	basic t;
	t.print(2.6f);
	
	
}
