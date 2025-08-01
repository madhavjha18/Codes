/*
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter size of the array: ";
    cin>>n;
    int array[10000];
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    cin>>array[i];
    cout<<"Given array: ";
    for(i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<endl;
    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            if(array[j]<array[j-1])
            swap(array[j],array[j-1]);
        }
    }
     cout<<"Sorted array: ";
    for(i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<endl;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter size of the array: ";
    cin>>n;
    int array[10000];
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    cin>>array[i];
    cout<<"Given array: ";
    for(i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<endl;
    for(i=n-2;i>=0;i--)
    {
        for(j=i;j<n-1;j++)
        {
            if(array[j]>array[j+1])
            swap(array[j],array[j+1]);
        }
    }
     cout<<"Sorted array: ";
    for(i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<endl;
}