/*
#include<iostream>
using namespace std;
int main()
{
    int index,i,j,n;
 cout<<"enter size of the array: ";
 cin>>n;
 int array[10000];
 cout<<"enter elements of the array: ";
 for( i=0;i<n;i++)
 cin>>array[i];
 for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            if(array[j]<array[j-1])
            swap(array[j],array[j-1]);
        }
    }
    cout<<" sorted array is: ";
for(i=0;i<n;i++)
cout<<array[i]<<" ";
cout<<endl;
    int x;
    cout<<"Enter number to be searched: ";
    cin>>x;
    int mid,first=0,last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(array[mid]==x)
        {
             cout<<"Element is found on the address "<<mid<<endl;
             break;
        }
        else
        if(array[mid]>x)
        last=mid-1;
        else
        if(array[mid]<x)
        first=mid+1;
        else{
        cout<<"Element not fount ";
        break;
        }
    }
}
*/
#include<iostream>
using namespace std;
int BinarySearch(int x,int n,int array[])
{
    int first=0,last=n-1,mid;
  while(first<=last)
  {
    mid=first+(last-first)/2;
    if(array[mid]==x)
    {
    cout<<"Element is present in the address: ";
    return mid;
    }
  else if(array[mid]<x)
  first=mid+1;
  else
  last=mid-1;
  }
return -1;
}
int main()
{
    int array[1000],n,i,j,x;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    cin>>array[i];
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j<=n;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
    }
    cout<<"Sorted array is: ";
    for(i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<endl;
   cout<<"enter the element to be searched: ";
   cin>>x;
   cout<<BinarySearch(x,n,array)<<endl;
   return 0;
}