#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool checkDistinct(int year) {
  int arr[4] = {year % 10, (year / 10) % 10, (year / 100) % 10, (year / 1000)};
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      if (arr[i] == arr[j]) {
        return false;
      }
    }
  }
  return true;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int y;
  cin >> y;
  y++;
  while (checkDistinct(y) != true) {
    y++;
  }
  cout << y;
  return 0;
}