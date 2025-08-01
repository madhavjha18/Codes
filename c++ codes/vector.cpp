#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v ={1,3,5,7,9};
    v.push_back(11);
    cout<<v.back()<<endl;
    cout<<v.empty()<<endl;
    cout<<v.front()<<endl;
    v.erase(v.begin()+2);
    for(int i : v)
    cout<<i<<" ";
    cout<<endl;
    v.resize(10,66);
    for(int &i : v)
    cout<<i<<" ";
    cout<<endl;
    for(auto j=v.rbegin();j!=v.rend();j++)
    cout<<*j<<" ";
    cout<<endl;
    vector<int>a ={75,53,77,9,722,99};
    sort(a.begin(),a.end());
    for(auto i: a)
    cout<<i<<" ";
    cout<<endl;
    sort(a.rbegin(),a.rend());
    for(auto &i : a)
    {
        i+=5;
        i/=10;
    }
for(auto i : a)
cout<<i<<" ";
cout<<endl;

sort(a.rbegin(),a.rbegin());
for(int i=0;i<a.size();i++)
cout<<a[i]<<" ";
cout<<endl;
    
}