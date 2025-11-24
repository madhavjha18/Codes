#include <bits/stdc++.h>
using namespace std;

 bool pallindrome(string& s,int left,int right){
     if(left>=right) return true;
     
     if(s[left] != s[right]) return false;
     
     return pallindrome(s,left+1,right-1);
 }
int main() {
    // printing 0-n pallindrome
    
    int n;
    cout<<" Enter n: ";
    cin>>n;
    
    vector<int>ans;
    for(int i = 0;i<=n;i++){
        string s = to_string(i);
        if(pallindrome(s,0,s.length()-1)){
            ans.push_back(i);
        }
    }
    for(auto &i : ans) cout<<i<<" ";

	return 0;
}
