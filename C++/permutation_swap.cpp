#include <bits/stdc++.h>

void permutation(vector<int> &arr, vector<vector<int>>& ans,int index){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=index; i<arr.size();i++){
        swap(arr[i],arr[index]);
        permutation(arr,ans,index+1);
        swap(arr[index],arr[i]);
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5,6};
    vector<vector<int>>ans;

    permutation(arr,ans,0);

    for(auto &row : ans){
        for(auto &i : row){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<ans.size();
    return 0;
}