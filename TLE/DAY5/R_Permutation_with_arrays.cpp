#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int A[n];
  int B[n];
  for (auto &i : A) {
    cin >> i;
  }
  for (auto &i : B) {
    cin >> i;
  }
  map<int, int> hm;

  // Traverse through the first array and add elements to hash map
  for (int i = 0; i < n; i++) {
    int x = arr1[i];
    hm[x]++;
  }

  // Traverse through second array and check if every element is
  // present in hash map
  for (int i = 0; i < m; i++) {
    int x = arr2[i];

    // If element is not present in hash map or element
    // is not present less number of times
    if (hm[x] == 0) {
      return false;
    }
    hm[x]--;
  }
  return true;
  if (flag == 1) {
    /* code */
    cout << "no";
  } else {
    /* code */
    cout << "yes";
  }

  return 0;
}