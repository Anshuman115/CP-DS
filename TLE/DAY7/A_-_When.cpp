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
  if (t > 60) {
    /* code */
    if (t % 60 < 10) {
      /* code */
      cout << "22:"
           << "0" << t % 60;
      return 0;
    }
    cout << "22:" << t % 60;

  } else if (t < 60) {
    if (t < 10) {
      /* code */
      cout << "21:"
           << "0" << t % 60;
      return 0;
    }
    cout << "21:" << t % 60;
  } else {
    cout << "22:00";
  }

  return 0;
}