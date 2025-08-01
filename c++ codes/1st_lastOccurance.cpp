#include<iostream>
using namespace std;
int main()
{
    int array[10000],i,mid,n,x;
    
    cout<<"Enter the size of array: ";
    cin>>n;
    int end=n-1,first=-1,last=-1,start=0;
    cout<<"Enter sorted elements in ascending order: ";
    for(i=0;i<n;i++)
    cin>>array[i];
    cout<<"Enter target number: ";
    cin>>x;
    while(start<=end)
    {
       { mid=start +(end-start)/2;
        if(array[mid]==x)
        {
            first=mid;
            end=mid-1;
        }
        else if(array[mid]<x)
        start=mid+1;
        else
        end=mid-1;
       }
     }
    cout<<first;
    end=n-1,first=-1,last=-1,start=0;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(array[mid]==x)
        {
            last=mid;
            start=mid+1;
        }
        else if(array[mid]>x)
        end=mid-1;
        else
        start=mid+1;
    }
    cout<<","<<last<<endl;
}