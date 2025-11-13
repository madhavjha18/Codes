#include <bits/stdc++.h>

bool target_sum(vector<int>&arr,int index,int target){
    if(target==0) return 1;
    if(index==arr.size() || target<0) return 0;

    return target_sum(arr,index+1,target) || target_sum(arr,index+1,target-arr[index]);
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int target;
    cout<<"Enter target sum subsequence: ";
    cin>>target;
    cout<<target_sum(arr,0,target);
    return 0;
}