#include <iostream>
using namespace std;

// #include "solution.h"
int arrayRotateCheck(int *input, int size) {
  // Write your code here
  int index = 0;
  for (int i = 1; i < size; i++)
    if (input[i] < input[i - 1]) index = i;
  return index;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++) {
      cin >> input[i];
    }

    cout << arrayRotateCheck(input, size) << endl;
    delete[] input;
  }

  return 0;
}