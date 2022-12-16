#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> v(3);

  for (int i = 0; i < 3; i++) {
    /* code */
    cin >> v[i];
  }
  vector<int> w = v;
  sort(v.begin(), v.end());
  for (int i = 0; i < 3; i++) {
    /* code */
    cout << v[i] << endl;
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    /* code */
    cout << w[i] << endl;
  }
  return 0;
}