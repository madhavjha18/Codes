
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
   cout<<pow2(5,3)<<endl;
    return 0;
}
