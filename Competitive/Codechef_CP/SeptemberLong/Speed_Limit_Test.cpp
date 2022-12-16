#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    /* code */
    int a, x, b, y;
    cin >> a >> x >> b >> y;
    float speedAlice = (float)a / x;
    // cout << speedAlice;
    float speedBob = (float)b / y;
    if (speedAlice > speedBob) {
      /* code */
      cout << "Alice" << endl;
    } else if (speedAlice > speedBob) {
      cout << "Bob" << endl;
    } else {
      cout << "Equal" << endl;
    }
  }

  return 0;
}