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
  int arr[n];
  for (auto &i : arr) {
    cin >> i;
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      /* code */
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";

  return 0;
}