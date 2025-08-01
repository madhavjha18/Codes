#include<iostream>
using namespace std;
int main()
{
    int num,ans=0,rem;
    cout<<"enter a number: ";
    cin>>num;
      while(num>9){
       while(num!=0 ){
        rem=num%10;
        num=num/10;
       ans=ans+rem;}
       num=ans;
       }
       cout<<num<<" ";
};
