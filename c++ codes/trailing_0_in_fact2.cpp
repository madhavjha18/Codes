#include <iostream>
using namespace std;

int main() {
   int count=0,num;
   cout<<"Enter the number: ";
   cin>>num;
   int copy=num;
   while(num>=5)
   {
       count+=num/5;
       num/=5;
       
   }
   cout<<"Trail of zero in the factorial of "<<copy<<" is "<<count<<endl;
   return 0;
}