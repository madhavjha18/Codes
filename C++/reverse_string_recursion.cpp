#include <bits/stdc++.h>

using namespace std;

// string reverse(string s,int index,string ans){
//     if(index==-1)
//     return ans;
//     ans+=s[index];
//     return reverse(s,index-1,ans);
// }

void reverse(string &s,int start,int end){
    if(start>=end)
    return;
    char c=s[start];
    s[start]=s[end];
    s[end]=c;
      reverse(s,start+1,end-1);
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    
    // cout<<reverse(s,s.length()-1,"")<<endl;
    reverse(s,0,s.length()-1);
    cout<<s<<endl;
    return 0;

}