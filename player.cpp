#include<iostream>
using namespace std;

class Player
{
	private:
		int runs,wickets;
	public:
		Player(int r,int w)
		{
			runs=r;
			wickets=w;
		}

		Player(const Player &p,int w=0)//copy constructor
		{
			runs=p.runs;
			wickets=w;
		}


		int getruns()
		{
			return runs;
		}

		int getwickets()
		{
			return wickets;
		}
};

int main()
{
Player p1(100,2);
Player p2=p1;
cout<<"player1 runs:"<<p1.getruns()<<"\t wickets:"<<p1.getwickets()<<endl;
cout<<"player2 runs:"<<p2.getruns()<<"\t wickets:"<<p2.getwickets()<<endl;


}
