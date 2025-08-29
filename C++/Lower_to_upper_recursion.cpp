#include "my_std.h"

using namespace std;

void lowertoupper(string &s,int index){
    if(index<0)
    return;
    if(s[index]!=' ')
    s[index]=s[index]+'A'-'a';
    
    lowertoupper(s,index-1);
    
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    lowertoupper(s,s.length()-1);
    cout<<s<<endl;
    
return 0;
}