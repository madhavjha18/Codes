#include<bits/stdc++.h>
using namespace std;


vector<int> robinkarp(string &txt, string &pat){
    vector<int>ans;
        int const MOD = 1e9 + 7;
        int s = pat.size();
        if(s > txt.size()) return ans;
        int sum = 0;
        int patsum = 0;
        int modval;
        for(int i = 0;i<s;i++){
            patsum += static_cast<int>(pat[i]);
            sum += static_cast<int>(txt[i]);
        }
        modval = patsum % MOD;
        
        if (sum % MOD == modval) {
            int k = 0;
            for (int j = 0; j < s; j++) {
                if (txt[j] != pat[k]) break;
                k++;
            }
            if (k == s) ans.push_back(0);
        }
        
        for(int i = s;i<txt.size();i++){
            sum -= static_cast<int>(txt[i-s]);
            sum += static_cast<int>(txt[i]);
            
            if(sum%MOD == modval){
                int k = 0;
                for(int j = i-s+1;j<=i;j++){
                    if(txt[j] != pat[k]) break;
                    k++;
                }
                if(k == s) ans.push_back(i-s+1);
            }
            
        }
        return ans;
}
int main(){
    string text, pattern;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the pattern: ";
    cin >> pattern;
    int n = text.length();
    int m = pattern.length();

    if(m > n){
        cout << "Pattern not found in text." << endl;
        return 0;
    }
    
    vector<int> result = robinkarp(text, pattern);
    if(result.empty()){
        cout << "Pattern not found in text." << endl;
    } else {
        cout << "Pattern found at indices: ";
        for(int index : result){
            cout << index << " ";
        }
        cout << endl;
    }
    return 0;
}