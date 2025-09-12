#include "my_std.h"

void subseq(int arr[], vector<int> temp, vector<vector<int>> &ans, int index,
            int n) {
  if (index == n) {
    ans.push_back(temp);
    return;
  }
  subseq(arr, temp, ans, index + 1, n);
  temp.push_back(arr[index]);
  subseq(arr, temp, ans, index + 1, n);
}
int main() {
  int arr[] = {1, 2, 3, 4};
  vector<int> temp;
  vector<vector<int>> ans;
  int n = sizeof(arr) / sizeof(arr[0]);
  subseq(arr, temp, ans, 0, n);
  for (int i = 0; i < ans.size(); i++) {
    cout << " {";
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << "},";
  }
  return 0;
}