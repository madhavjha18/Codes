#include<bits/stdc++.h>
using namespace std;

int stringMaching(string &s){
    int n = s.length();
    vector<int>kmp(n,0);
    int pre = 0,suf = 1;
    while(suf<n){
        if(s[suf] == s[pre]){
            kmp[suf] = pre+1;
            suf++,pre++;
        }
        else{
            if(pre == 0){
            kmp[suf] = 0;
            suf++;
            }
            else pre = kmp[pre - 1];
        }
    }
    return kmp[n-1];
}
int main(){

    string s = "abcabaabacabcab";

    cout<<stringMaching(s)<<endl;
}