#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s;
  cin >> s;
  char x;
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (count == 0) {
      /* code */
      x = s[i];
      count++;
    } else if (s[i] == x) {
      /* code */
      count++;
      if (count == 7) {
        /* code */
        cout << "YES";
        return 0;
      }
    } else {
      /* code */
      count = 1;
      x = s[i];
    }
  }
  cout << "NO";

  return 0;
}