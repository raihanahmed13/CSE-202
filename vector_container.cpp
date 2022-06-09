#include<iostream>
#include<vector>
using namespace std;

main()
{
	//create a vector
	vector<int> v;
	
	//insert the elements
	v.push_back(10);  //push_back is algorithm
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	
	
	v[1]=20;
	
	int i;
	for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
	
}
