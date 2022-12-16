#include <iostream>

// #include "Solution.h"
using namespace std;

int count(int n) {
  // write your code here
  int counted = 0;
  if (n < 10) {
    return 1;
  } else {
    counted++;
    int a = count(n / 10);
    return counted + a;
  }
}

int main() {
  int n;
  cin >> n;

  cout << count(n) << endl;
}
