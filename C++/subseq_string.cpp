
#include <bits/stdc++.h>
using namespace std;

void subseq(string &s,int index,int n,string &temp,vector<string>& ans){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    
    subseq(s,index+1,n,temp,ans);
    temp.push_back(s[index]);
    subseq(s,index+1,n,temp,ans);
    temp.pop_back();
}
int main(){
    string s="abcd";
    string temp="";
    vector<string>ans;
    subseq(s,0,s.length(),temp,ans);
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
    }
   
return 0;
}