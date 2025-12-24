#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> &arr,vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited){
    if(temp.size() == arr.size()){
        ans.push_back(temp);
        return;
    }
    for(int i = 0;i < arr.size();i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(arr[i]);

            permutation(arr,ans,temp,visited);
            temp.pop_back();
            visited[i] = 0;
        }
    }
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited(arr.size(),0);

    permutation(arr,ans,temp,visited);

    for(auto &row : ans){
        for(auto &i : row){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    cout<<ans.size();
    return 0;
}