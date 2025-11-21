#include<bits/stdc++.h>
using namespace std;

void pallindrome(string &s,vector<string>&ans,string &temp,int n,int index){
     if(index == n || temp.size() == 3){
    if(temp.size() == 3 && temp[0] == temp[2]){
        if(find(ans.begin(),ans.end(),temp) == ans.end())
        ans.push_back(temp);
    }
    return;
    }
    pallindrome(s,ans,temp,n,index+1);
    temp.push_back(s[index]);
    pallindrome(s,ans,temp,n,index+1);
    temp.pop_back();
}
int main(){
    string s = "cadgalas";
    vector<string>ans;
    int n = s.length();
    string temp;
    pallindrome(s,ans,temp,n,0);
    for(auto &row : ans){
        for(auto &i : row){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<ans.size()<<endl;
    return 0;
}