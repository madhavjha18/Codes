#include <bits/stdc++.h>

using namespace std;

bool linearsearch(int arr[], int index, int key) {
  if (index == -1) {
    return false;
  }
  bool found = linearsearch(arr, index - 1, key);
  if (arr[index] == key) {
    cout << "element is found at " << index << " index" << endl;
    return true;
  }
  return found;
}

int main() {
  int arr[] = {3, 35, 21, 63, 62, 65, 21, 67, 35};
  int key;
  cout << "enter element to be search: ";
  cin >> key;
  if (!linearsearch(arr, sizeof(arr) / sizeof(arr[0]) - 1, key))
    cout << "element not found" << endl;

  return 0;
}