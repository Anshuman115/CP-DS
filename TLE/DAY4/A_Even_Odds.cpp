#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, k;
  cin >> n >> k;

  if (k <= (n + 1) / 2) {
    /* code */
    cout << 2 * k - 1;
  } else if (k > (n + 1) / 2) {
    /* code */
    cout << 2 * (k - ((n + 1) / 2));
  }

  return 0;
}