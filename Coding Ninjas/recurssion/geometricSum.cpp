#include <math.h>

#include <iomanip>
#include <iostream>

// #include "solution.h"
using namespace std;
double geometricSum(int k) {
  // Write your code here
  if (k == 0) {
    return 1;
  }
  return 1 / pow(2, k) + geometricSum(k - 1);
}

int main() {
  int k;
  cin >> k;
  cout << fixed << setprecision(5);
  cout << geometricSum(k) << endl;
}
