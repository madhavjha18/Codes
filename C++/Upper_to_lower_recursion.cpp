#include <bits/stdc++.h>

using namespace std;

void Uppertolower(string &s,int index){
    if(index<0)
    return;
    if(s[index]!=' ')
    s[index]=s[index]+'a'-'A';
    
    Uppertolower(s,index-1);
    
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s); //  Updated input method to handle spaces
    Uppertolower(s,s.length()-1);
    cout<<s<<endl;
    
return 0;
}