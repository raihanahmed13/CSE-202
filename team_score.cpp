#include<iostream>
using namespace std;

class team
{
	int score;
	static int team_score;
	
	public:
		void get()
		{
			cout<<"Enter the score:"<<endl;
			cin>>score;
		}
		void put()
		{
			cout<<"The Score is "<<score<<endl;
		}
		void total()
		{
			team_score = team_score + score;
			cout<<"The team score is: "<<team_score;
		}
};

int team::team_score;

int main()
{
	team m1,m2,m3;
	cout<<"Player 1:"<<endl;
	m1.get();
	m1.put();
	m1.total();
	cout<<endl<<"Player 2:"<<endl;
	m2.get();
	m2.put();
	m2.total();
	cout<<endl<<"Player 3:"<<endl;
	m3.get();
	m3.put();
	m3.total();
	
}
