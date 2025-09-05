#include "my_std.h"

bool binarysearch(vector<int> arr, int left, int right, int key) {
  int mid = left + right - left / 2;
  if (left > right)
    return 0;
  if (arr[mid] == key)
    return 1;
  else if (arr[mid] > key)
    return binarysearch(arr, left, mid - 1, key);
  else
    return binarysearch(arr, mid + 1, right, key);
}

int main() {
  vector<int> arr = {32, 52, 1, 35, 784, 2, 1, 56, 21, 56, 73, 54};
  sort(arr.begin(), arr.end());
  int key;
  cout << "enter element to be search: ";
  cin >> key;
  if (!binarysearch(arr, 0, arr.size() - 1, key))
    cout << "Element not found " << endl;
  else
    cout << "Element is present in the array" << endl;

  return 0;
}