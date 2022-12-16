#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < 12; i++) {
    /* code */
    cout << n << " * " << i + 1 << " = " << n * (i + 1) << endl;
  }

  return 0;
}