#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(vector<int>&arr,int start,int end){
    if(start>=end)
    return;
    
    int pivot=partition(arr,start,end);
    
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
    
}

void printarray(vector<int>&arr,int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main() 
{
   int size;
   cout<<"Enter the size of array: ";
   cin>>size;
   
   vector<int>arr(size);
   cout<<"Enter elements: ";
   for(int i=0;i<size;i++)
   cin>>arr[i];
   
   cout<<"Original array: ";
   printarray(arr,size);
   
   quicksort(arr,0,size-1);
   
   cout<<"sorted array: ";
   printarray(arr,size);
   
    return 0;
}