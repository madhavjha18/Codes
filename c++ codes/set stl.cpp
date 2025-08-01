
#include <bits/stdc++.h>
using namespace std;

int main()
{

	//Set

	set<int>s;  //stores values in ascending order and Only unique elements are stored

	s.insert(9);
	s.insert(5);
	s.insert(55);
	s.insert(5); // Here 5 is inserted twice and hence set will not store it
	s.insert(91);
	s.insert(32);

	cout<<"in ascending order: ";
	for(auto i=s.begin(); i!=s.end(); i++)
		cout<<*i<<" ";
	cout<<endl;

	cout<<"in decending order: ";
	for(auto i=s.rbegin(); i!=s.rend(); i++)
		cout<<*i<<" ";
	cout<<endl;

	// Created a set to store element inside the set in decending order
	set<int,greater<int>>s1;

	s1.insert(1);
	s1.insert(6);
	s1.insert(76);
	s1.insert(33);
	s1.insert(56);
	s1.insert(32);

	cout<<"greater int set in descending order: ";
	for(auto i=s1.begin(); i!=s1.end(); i++)
		cout<<*i<<" ";
	cout<<endl;

	cout<<"greater int set in acending order: ";
	for(auto i=s1.rbegin(); i!=s1.rend(); i++)
		cout<<*i<<" ";
	cout<<endl;


	//To check if a element is present or not
	if(s.find(32)!=s.end())  // s.find() returns an iterstor, and s.find(32) will return an iterator that points to 32 if 32 is present if not present it will return s.end() i.e an iterator that points to next to the last element of set
		cout<<"Present"<<endl;
	else
		cout<<"Absent"<<endl;

	//Another way to do the same thing
	if(s1.count(32)) // here s1.count(32) will return no. of occurance of 32, since it is set it will either return 1 or 0
		cout<<"present"<<endl;
	else
		cout<<"absent"<<endl;



	//Multi-set

	multiset<int>m; //In multi set duplicate values are allowed to be stored

	//inserting
	m.insert(5);
	m.insert(4);
	m.insert(2);
	m.insert(2);
	m.insert(4);
	m.insert(1);

	cout<<"Multi-set in ascending order: ";
	for(auto i=m.begin(); i!=m.end(); i++)
		cout<<*i<<" ";
	cout<<endl;

	cout<<"Multi-set in decending order: ";
	for(auto i=m.rbegin(); i!=m.rend(); i++)
		cout<<*i<<" ";
	cout<<endl;

	//deletion
	m.erase(2); //all occurance of 2 will be removed
	m.erase(9); //if it is not present nothing will be removed


	cout<<"Multi-set after deletion: ";
	for(auto i=m.begin(); i!=m.end(); i++)
		cout<<*i<<" ";
	cout<<endl;



	return 0;
}