#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int x, y;
  cin >> x >> y;
  string str = "atcoder";
  cout << str.substr(x - 1, y - x + 1);

  return 0;
}