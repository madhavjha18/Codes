// This code is to calculate number of combination of subsequence to get target sum

#include <bits/stdc++.h>

int perfectsum(vector<int> &arr, int sum, int index){
    if(index == arr.size()){
        return sum == 0;
    }

    return perfectsum(arr,sum,index+1) + perfectsum(arr,sum - arr[index],index+1); // add sum+arr[index] for negative 
}

int main(){
    vector<int>arr = {1,0,0,1};

    int target = 2;

    cout<<perfectsum(arr,target,0);
}