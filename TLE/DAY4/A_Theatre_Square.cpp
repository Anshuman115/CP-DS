#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int m, n, a;
  cin >> m >> n >> a;
  int l = m / a;
  if (m % a != 0) {
    /* code */
    l++;
  }
  int z = n / a;
  if (n % a != 0) {
    /* code */
    z++;
  }

  cout << l * z;
  return 0;
}