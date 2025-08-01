
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//list
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(90);
	l.push_back(80);
	l.push_back(70);
	for(auto i=l.begin(); i!=l.end(); i++)
		cout<<*i<<" ";
	cout<<endl;
	l.pop_front();
	l.pop_back();
	l.push_front(99);
	l.push_front(9);
	// Instead of "auto" we can write "list<int>::iterator" too
	for(list<int>::iterator i=l.begin(); i!=l.end(); i++)
		cout<<*i<<" ";
	cout<<endl;

	cout<<l.empty()<<endl; // returns 0 or 1 for empty or non-empty respectively
	cout<<l.size()<<endl;


	return 0;
}