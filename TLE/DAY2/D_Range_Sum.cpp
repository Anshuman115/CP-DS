#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;
    int sum = 0;
    if (l > r) {
      /* code */
      sum = l * (l + 1) / 2 - (r - 1) * r / 2;
    } else {
      /* code */
      sum = r * (r + 1) / 2 - (l - 1) * l / 2;
    }
    cout << sum << endl;
  }

  return 0;
}