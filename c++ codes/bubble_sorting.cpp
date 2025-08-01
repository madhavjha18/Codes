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
    for(i=n-2;i>=0;i--)
    {
    bool swapped=0;
        for(j=0;j<=i;j++)
        {
            if(array[j]>array[j+1]){
            swap(array[j],array[j+1]);
            swapped=1;
            }
        }
        if(swapped==0)
        break;
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
    for(i=1;i<=n-1;i++)
    {
   
        for(j=n-1;j>=i;j--)
        {
            if(array[j]<array[j-1])
            {
            swap(array[j],array[j-1]);
            
            }
        }
       
    }
    cout<<"Sorted array: ";
    for(i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<endl;
}