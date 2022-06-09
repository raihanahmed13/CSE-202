//incomplete
#include<iostream> 

using namespace std;

template<class T>
class queue
{
	T arr[5];
	
	void insert()
	{
	
		int i=-1;
		if(i==5)
		{
			cout<<"Can't insert!! "<<endl;
		}
		else
		{
			i = i+1;
			for(i=0; i<5; i++)
			{
				cin>>arr[i];
			}
		}
	}
	
	void delete()
	{
		int d = -1;
		if(d==-1)
		{
			cout<<"Element can't be deleted!!"<<endl;
		}
		
		else
		{
			d=d+1;
			for(d=0;d<5;d++)
			{
				
			}
		}
	}
}
