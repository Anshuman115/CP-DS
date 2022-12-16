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
  int ant = 0, dan = 0;
  string str;
  cin >> str;
  for (int i = 0; i < n; i++) {
    /* code */
    if (str[i] == 'A') {
      /* code */
      ant++;
    } else {
      /* code */
      dan++;
    }
  }
  if (ant > dan) {
    cout << "Anton";
  } else if (dan > ant) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }

  return 0;
}