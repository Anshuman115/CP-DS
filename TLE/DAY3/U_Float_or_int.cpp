#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  double n;
  cin >> n;
  int a = n;
  if (a == n) {
    /* code */
    cout << "int " << a;
  } else {
    cout << "float " << a << " " << n - a;
  }

  return 0;
}