#include<iostream>
#include<climits>
using namespace std;

int main(){
  int arr[5]={4,3,2,4,5};
  int min=INT_MAX;
  int max=INT_MIN;
    for(int i=0;i<5;i++){
    if(arr[i]<min)
    min=arr[i];
   if(arr[i]>max)
   max=arr[i];
    }
    cout<<min<<endl<<max<<endl;
}