#include <bits/stdc++.h>

void subseq(vector<int>&arr,int sum,int target,vector<vector<int>>&ans,int index,vector<int>&temp){
     if(sum==target){
        ans.push_back(temp);
        return;
        }
    if(index>=arr.size() || sum > target){
        return;
    }
    temp.push_back(arr[index]);
    subseq(arr,sum + arr[index],target,ans,index,temp);
    
    temp.pop_back();
    subseq(arr,sum,target,ans,index+1,temp);
    
}

int main(){
   vector<int>arr={2,5,6,1};
   vector<vector<int>>ans;
   vector<int>temp;
   int target=6;
   int sum=0;
   subseq(arr,sum,target,ans,0,temp);
   
   for(auto &row:ans){
       for(auto &val: row){
           cout<<val<<" ";
       }
       cout<<endl;
   }
   
   cout<<ans.size();
return 0;
}