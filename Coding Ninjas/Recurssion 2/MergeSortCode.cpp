#include <iostream>

// #include "solution.h"
using namespace std;

void merge(int input[], int si, int mid, int ei) {
  int c[ei - si + 1];
  int i = si;
  int j = mid + 1;
  int k = 0;
  while (i <= (mid) && j <= (ei)) {
    if (input[i] < input[j]) {
      c[k++] = input[i++];
    } else {
      c[k++] = input[j++];
    }
  }

  while (i <= mid) {
    c[k++] = input[i++];
  }

  while (j <= ei) {
    c[k++] = input[j++];
  }

  int m = 0;
  for (int i = si; i <= ei; i++) {
    input[i] = c[m];
    m++;
  }
}

void mergeSortHelp(int input[], int si, int ei) {
  if (si >= ei) {
    return;
  }

  int mid = (si + ei) / 2;

  mergeSortHelp(input, si, mid);
  mergeSortHelp(input, mid + 1, ei);
  merge(input, si, mid, ei);
}

void mergeSort(int input[], int size) {
  // Write your code here
  mergeSortHelp(input, 0, size - 1);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for (int i = 0; i < length; i++) cin >> input[i];
  mergeSort(input, length);
  for (int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}