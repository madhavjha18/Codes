#include <bits/stdc++.h>
using namespace std;

// // Step up Approach (time complexity : nlogn)
// void heapify(vector<int>&arr,int n){

//     for(int i = 1;i<n;i++){
//         int curr = i;

//         while(curr > 0 && arr[curr] > arr[(curr - 1)/2]){
//             swap(arr[curr],arr[(curr - 1)/2]);
//             curr = (curr - 1)/2;
//         }
//     }
// }

// // heapsort function for step up
// void heapsort(vector<int>&arr){
//     int n = arr.size();

//     for(int i = n - 1;i>0;i--){
//         swap(arr[0],arr[i]);
//         heapify(arr,i);
//     }
// }

//step down approach (time complexity: n)
void heapify(vector<int>&arr,int n,int index){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if(left < n && arr[left] > arr[index])
    largest = left;
    if(right < n && arr[right] > arr[index])
    largest = right;

    if(largest != index){
        swap(arr[largest],arr[index]);
        heapify(arr,n,largest);
    }
}

// heapsort function for step down approach
void heapsort(vector<int>&arr){
    int n = arr.size();

    for(int i = n - 1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

//build initial heap then sort
void buildheap(vector<int>&arr){
    int n = arr.size();

    for(int i = n/2 - 1;i>=0;i--)
    heapify(arr,n,i);

    //sort the array
    heapsort(arr);
}

void print(vector<int>&arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {

    vector<int>arr = {12,25,63,73,78,33,84,85,96,23,74,11,43,65,85,82,83,49,99};

    int n = arr.size();

    buildheap(arr);

    print(arr);

    return 0;
}