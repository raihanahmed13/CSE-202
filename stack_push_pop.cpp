//stack push pop function
#include<iostream>
using  namespace std;
class pair
{
	int x;
	public:
		pair()
		{
			cout<<"Enter the value of x: ";
			cin>>x;	
			
		}
	
};

class stack
{
	int arr[10];
	int top;
	public:
		stack()
		{
			top=-1;
		}
	void push(int a)
	{
		s[++top]=a;
	}
	void pop()
	{
		int a = s[top];
		top--;
	}
};

class stack2:public stack
{
	void push(int a)
	{
		if(top>=9)
		{
			cout<<"Stack is full!!";
			exit(1);
		}
		stack::push(a);
	
	}
	void pop()
	{
		if(top<0)
		{
			cout<<"Stack is empty!!";
			exit(1);
		}
		stack::pop();
	}
};

main()
{
	
}
