#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    vector<long long> ans(1,1);
    while(n > 1){
        int carry = 0,res;
        int size = ans.size();
        for(int i=0;i<size;i++){
            res = ans[i] * n + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }
        while(carry){
            ans.push_back(carry % 10);
            carry /= 10;
        }
        n--;
    }
    reverse(ans.begin(),ans.end());
    cout<<"Factorial is: ";
    for(auto &num:ans){
        cout<<num;
    }
    cout<<endl;
    return 0;
}