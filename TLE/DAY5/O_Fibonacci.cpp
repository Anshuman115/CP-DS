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
  vector<int> v(51);
  v[1] = 0;
  v[2] = 1;
  for (int i = 3; i <= 50; i++) {
    /* code */
    v[i] = v[i - 1] + v[i - 2];
  }
  cout << v[n];
  return 0;
}