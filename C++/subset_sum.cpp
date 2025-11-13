
#include <bits/stdc++.h>

void subseq(vector<int>&arr,int index,int sum)
{
    if(index==arr.size()){
        cout<<sum<<" "; 
        return;
    }
    subseq(arr,index+1,sum);
    subseq(arr,index+1,sum+arr[index]);
    
}

int main(){
   vector<int>arr={3,4,5};
   
   subseq(arr,0,0);
return 0;
}