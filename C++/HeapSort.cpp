#include <bits/stdc++.h>
using namespace std;

// Step Up Approach
void heapify(vector<int>&arr,int n){

    for(int i = 1;i<n;i++){
        int curr = i;

        while(curr > 0 && arr[curr] > arr[(curr - 1)/2]){
            swap(arr[curr],arr[(curr - 1)/2]);
            curr = (curr - 1)/2;
        }
    }
}

void heapsort(vector<int>&arr){
    int n = arr.size();

    for(int i = n - 1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i);
    }
}

void print(vector<int>&arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {

    vector<int>arr = {12,25,63,73,78,33,84,85,96,23,74,11,43,65,85,82,83,49};

    int n = arr.size();
    heapify(arr,n);

    heapsort(arr);

    print(arr);

    return 0;
}