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
  cout << *max_element(arr, arr + n);
  return 0;
}