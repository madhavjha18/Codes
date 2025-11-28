#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = matrix.size();
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(auto &row : matrix){
        for(auto &i : row)
        cout<<i<<" ";

        cout<<endl;
    }
    return 0;
}