
#include <bits/stdc++.h>

using namespace std;

int pow2(int num,int n){
    if(n==1)
    return num;
    if(n==0)
    return 0;
    return num*pow2(num,n-1);
}

int main()
{
    int num,n;
    cout<<"Enter the number and its power: ";
    cin>>num>>n;
    cout<<pow2(num,n)<<endl;
    return 0;
}
