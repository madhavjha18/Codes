#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<vector<int>> nums = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = nums.size();
    int k = n-1;

    // step 1: reversing the rows
     for(int i = 0;i<k;i++){
       
       for(int j = 0;j<n;j++){
           swap(nums[i][j],nums[k][j]);
       }
       k--;
   }
   
   // step 2: reversing the columns
   for(int i = 0;i<n;i++){
       int l = 0,r = n-1;
       while(l<=r){
           swap(nums[i][l],nums[i][r]);
           l++,r--;
       }
   }
   for(auto &row : nums){
       for(auto &i : row)
       cout<<i<<" ";
       
       cout<<endl;
   }
   return 0;
}