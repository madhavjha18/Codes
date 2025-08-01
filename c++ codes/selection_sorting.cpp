/*
#include<iostream>
using namespace std;
int main()
{
    int index,i,j,n;
 cout<<"enter size of the array: ";
 cin>>n;
 int array[n];
 cout<<"enter elements of the array: ";
 for( i=0;i<n;i++)
 cin>>array[i];
 cout<<"given array is ";
 for(i=0;i<n;i++)
 cout<<array[i]<<" ";
 cout<<endl;
for(i=0;i<n-1;i++){
index=i;
for(j=i+1;j<n;j++)
{
    if(array[j]<array[index])
    index=j;
}
swap(array[i],array[index]);
}
cout<<" sorted array is: ";
for(i=0;i<n;i++)
cout<<array[i]<<" ";
cout<<endl;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int index,i,j,n;
 cout<<"Enter size of the array: ";
 cin>>n;
 int array[n];
 cout<<"Enter elements of the array: ";
 for( i=0;i<n;i++)
 cin>>array[i];
 cout<<"Given array is: ";
 for(i=0;i<n;i++)
 cout<<array[i]<<" ";
 cout<<endl;
for(i=n-1;i>0;i--){
index=i;
for(j=i-1;j>=0;j--)
{
    if(array[j]>array[index])
    index=j;
}
swap(array[i],array[index]);
}
cout<<"Sorted array is: ";
for(i=0;i<n;i++)
cout<<array[i]<<" ";
cout<<endl;
}