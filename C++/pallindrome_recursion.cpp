
#include <bits/stdc++.h>

using namespace std;

bool pallindrome(string str,int left,int right){
    if(str[left]!=str[right]){
        return false;
    }
    if(left>=right)
    return true;
    return pallindrome(str,left+1,right-1);
}
int main(){
  string s;
  cout<<"Enter a string: ";
  cin>>s;
  if(pallindrome(s,0,s.length()-1)){
      cout<<"string is pallindrome"<<endl;
  }
  else
  cout<<"not pallindrome"<<endl;
    return 0;
}