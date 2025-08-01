#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    char grade;
    int roll;
    
public:
   void setvalues(string n,char g,int r ){
    name=n;
    grade=g;
    roll=r;
    }

   
    int value()
    {
        return roll;
    }
    

    void getvalues(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<roll<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

int main()
{
    student s1;
    s1.setvalues("Madhav",'A',077);
    cout<<"0"<<oct<<s1.value()<<endl; 
    //since a num that start with 0 is considered an octal no in c++ hence this step to print it normally.
    s1.getvalues();
 return 0;   
}