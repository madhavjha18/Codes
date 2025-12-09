#include <bits/stdc++.h>
using namespace std;

int main() {
        int n = 10;
        vector<vector<int>>ans;
        for(int i = 0;i<n;i++){
            vector<int>temp(i+1);
            temp[0] = 1,temp[i] = 1;
            int j = 1;
            
            while(j<i){
                vector<int> a = ans.back();
                temp[j] = a[j-1]+a[j];
                j++;
            }
            ans.push_back(temp);
        }
        
       for(int i = 0; i < n; i++){
        
        for(int s = 0; s < (n - i - 1); s++)
            cout << " ";
        for(int x : ans[i])
            cout << x << " ";

        cout << "\n";
    }
}
