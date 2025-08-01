#include<iostream>
using namespace std;
int prime(int n)
{
    if (n<2)
    return 0;
    int i;
   
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int fact(int n)
{
    int i,ans=1;
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"enter the numbers: ";
    cin>>a>>b;
    cout<<prime(a)<<"\n";
    cout<<prime(b)<<"\n";
    cout<<fact(a)<<"\n";
    cout<<fact(b)<<"\n";
    cout<<prime(b-a)<<"\n";
    cout<<fact(b-a)<<"\n";
    return 0;
}
