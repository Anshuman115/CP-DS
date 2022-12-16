#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool isPrime(int x) {
  int flag = 0;
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 1) {
    /* code */
    return false;
  } else {
    /* code */
    return true;
  }
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++) {
    /* code */
    if (isPrime(i) == true) {
      /* code */
      cout << i << " ";
    }
  }

  return 0;
}