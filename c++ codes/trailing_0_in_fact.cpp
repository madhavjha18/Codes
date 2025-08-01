#include<iostream>
using namespace std;
int main ()
{
    long long fact=0,num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=num-1;i>0;i--)
    {
        fact=(i*num);
        num=fact;
    }
    cout<<fact<<endl;
    long long zero=0,n,temp=fact;
    while(temp)
    {
        n=temp%10;
        temp=temp/10;
        if(n==0)
        zero++;
        else
        if(n!=0)
         break;
        
    }
    cout<<zero<<endl;
}
