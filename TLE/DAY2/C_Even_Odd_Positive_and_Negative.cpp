#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    /* code */
    cin >> arr[i];
  }
  int even = 0, odd = 0, positive = 0, negative = 0;
  for (int i = 0; i < n; i++) {
    /* code */
    if (arr[i] % 2 == 0) {
      /* code */
      even++;
    } else {
      /* code */
      odd++;
    }
    if (arr[i] > 0) {
      /* code */
      positive++;
    } else if (arr[i] < 0) {
      /* code */
      negative++;
    }
  }
  cout << "Even: " << even << endl;
  cout << "Odd: " << odd << endl;
  cout << "Positive: " << positive << endl;
  cout << "Negative: " << negative << endl;

  return 0;
}