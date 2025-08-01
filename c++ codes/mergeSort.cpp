#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int start,int mid,int end){
    int left=start,right=mid+1,index=0;
    vector<int>temp(end-start+1);

    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++,right++;
    }

    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }
}

void mergesort(vector<int>&arr,int start,int end){
    if(start==end)
    return;

    int mid=start+(end-start)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);

    merge(arr,start,mid,end);
}

void printarray(vector<int>&arr,int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    vector<int>arr(size);

    cout<<"Enter elements: ";
    for(int i=0;i<size;i++)
    cin>>arr[i];

    cout<<"Original array: ";
    printarray(arr,size);

    mergesort(arr,0,size-1);

    cout<<"sorted array: ";
    printarray(arr,size);

}