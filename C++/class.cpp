#include <bits/stdc++.h>

using namespace std;
class student{
  public: //to assign value in main function we need to set public access specifier
  string name;
  int age,roll;
  char grade;  
};// semicolon here is necessary in c++
int main(){
  student *s=new student; //pointer type object
  
  (*s).name="Madhav"; //this is one way to access name and age
  (*s).age=22; 
  s->roll=77; //this is another way to access properties of class (pointer object)
  s->grade='A';

  cout<<s->name<<" "<<s->age<<endl;

}
