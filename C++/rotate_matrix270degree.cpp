#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = matrix.size();
   /*
    int deg = 3;
    while(deg--){
    // step 1: Transpose 
    for(int i = 0;i<n;i++){ 
        for(int j = i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // step 2: reverse element in each row
    for(int i = 0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
    */

    // Optimized approach for 270 degree rotation
    // step 1: transpose
    for(int i = 0;i<n;i++){ 
        for(int j = i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // step 2: reverse element in each column
    for(int j = 0;j<n;j++){
        int top = 0;
        int bottom = n-1;
        while(top<bottom){
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }
    for(auto &row : matrix){
        for(auto &i : row)
        cout<<i<<" ";

        cout<<endl;
    }

    return 0;
}