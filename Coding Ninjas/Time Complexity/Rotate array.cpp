#include <iostream>
using namespace std;

// #include "solution.h"

void rotator(int *arr, int n) {
  for (int i = 0, j = n - 1; i <= j; i++, j--) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}
void rotate(int *input, int d, int n) {
  rotator(input, n);
  rotator(input + n - d, d);
  rotator(input, n - d);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; ++i) {
      cin >> input[i];
    }

    int d;
    cin >> d;

    rotate(input, d, size);

    for (int i = 0; i < size; ++i) {
      cout << input[i] << " ";
    }

    delete[] input;
    cout << endl;
  }

  return 0;
}