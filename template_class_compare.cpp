#include<iostream>
using namespace std;

template<class T>

class grt
{
	T num1,num2;
	
	public:
		void get();
		
		T compare()
		{
			if(num1>num2)
			return num1;
			else
			return num2;
		}
};
template<class T>
void grt <T>::get()
{
	cout<<"Enter num1 value: ";
	cin>>num1;
	cout<<"Enter num2 value: ";
	cin>>num2;
}

main()
{
	grt <int> g1;
	g1.get();
	
	cout<<endl<<"The greater is: "<<g1.compare();
	
	

}


