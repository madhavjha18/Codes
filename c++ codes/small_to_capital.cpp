#include <iostream>
using namespace std;
char convert(char name)
{
    name=name-'a'+'A';
}

int main()
{
    char name;
    cout<<"enter the character: ";
    cin>>name;
     cout<<convert(name)<<endl;
     
}