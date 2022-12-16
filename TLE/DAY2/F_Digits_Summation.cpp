#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX / 2;

signed main() {
  ios::sync_with_stdio(false);
  int x, y;
  cin >> x >> y;
  cout << (x % 10) + (y % 10);
  return 0;
}