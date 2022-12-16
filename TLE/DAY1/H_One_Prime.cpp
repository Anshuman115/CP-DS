#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;  // 7
  int flag = 0;

  for (int i = 2; i <= x / 2; i++) {
    /* code */
    // 0 to 3
    if (x % i == 0) {
      /* code */
      // 7
      flag = 1;
      break;
    }
  }
  if (flag == 1) {
    /* code */
    cout << "NO" << endl;
  } else {
    /* code */
    cout << "YES" << endl;
  }

  return 0;
}