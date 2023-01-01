#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int h, w;
  cin >> h >> w;
  int arr[h][w];
  for (int i = 0; i < h; i++) {
    /* code */
    for (int j = 0; j < w; j++) {
      /* code */
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < w; i++) {
    /* code */
    for (int j = 0; j < h; j++) {
      /* code */
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}