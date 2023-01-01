#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string x, y;
  cin >> x >> y;
  string n = "";
  for (int i = 0; i < x.length(); i++) {
    /* code */
    if (x[i] == y[i]) {
      /* code */
      n = n + '0';
    } else {
      /* code */
      n = n + '1';
    }
  }
  cout << n;

  return 0;
}