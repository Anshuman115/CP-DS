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
    int n;
    cin >> n;
    int arr[n];
    for (auto &i : arr) {
      cin >> i;
    }
    int odd = 0;
    int even = 0;
    for (auto i : arr) {
      if (i % 2 != 0) {
        /* code */
        odd++;
      } else {
        even++;
      }
    }
    if (odd == even) {
      /* code */
      cout << 0 << endl;
    } else if (odd > even) {
      /* code */
      if ((odd - even) % 2 == 0) {
        /* code */
        cout << (odd - even) / 2 << endl;
      } else {
        cout << -1 << endl;
      }

    } else {
      if ((even - odd) % 2 == 0) {
        /* code */
        cout << (even - odd) / 2 << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
  return 0;
}