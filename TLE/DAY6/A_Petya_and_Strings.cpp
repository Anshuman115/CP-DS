#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string s1, s2;
  cin >> s1 >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
  transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] < s2[i]) {
      /* code */
      cout << -1;
      return 0;
    } else if (s1[i] > s2[i]) {
      cout << 1;
      return 0;
    }
  }
  cout << 0;

  return 0;
}