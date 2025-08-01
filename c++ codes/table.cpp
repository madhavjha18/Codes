#include<iostream>
using namespace std;
int main()
{
  int a,n,i;
  cout<<"enter the table: ";
  cin>>n;
  for(i=1;i<=10;i=i+1)
  {
    a=i*n;
  cout<<n<<"*"<<i<<"="<<a<<endl;
  }
};