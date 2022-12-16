#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  int k, s;
  // taking input k and s
  cin >> k >> s;
  int val = 0;
  // count = 0
  for (int i = 0; i <= k; i++) {
    // for i in loop from 0 to k
    // to find x for a certain x we find a y i.e j and then we find z. then
    // satisfy the condition of z.
    /* code */
    for (int j = 0; j <= k; j++) {
      /* code */
      int z = s - i - j;
      if (z >= 0 && z <= k) {
        /* code */
        val++;
      }
    }
  }
  cout << val;

  return 0;
}