#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int w, x, y, z;
    cin >> w >> x >> y >> z;
    int f = w;
    for (int i = 0; i < z; i++) {
      /* code */
      f = f + x - y;
    }
    cout << f << endl;
  }
  return 0;
}