#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  double m, n, a;
  cin >> m >> n >> a;
  cout << ceil(m / a) * ceil(n / a);
  return 0;
}