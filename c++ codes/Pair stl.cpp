
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// pair of two element (name,age)
	pair<string,int>p2;
	p2.first="madhav";
	p2.second=21;
	cout<<p2.first<<" "<<p2.second<<endl;

	// pair of 5 element (name,age,weight,height,profession)
	pair<string, pair<pair<int,int>,pair<float,string>>>p5;
	p5.first="Madhav Jha";
	p5.second.first.first=21;
	p5.second.first.second=58;
	p5.second.second.first=5.11;
	p5.second.second.second="Student";

	cout<<p5.first<<" "<<p5.second.first.first<<" "<<p5.second.first.second<<" "<<p5.second.second.first<<" "<<p5.second.second.second<<endl;



	return 0;
}