#include <iostream>
#include <string>

// #include "solution.h"
using namespace std;

#include <string>
using namespace std;

string key[] = {" ",   " ",   "abc",  "def", "ghi",
                "jkl", "mno", "pqrs", "tuv", "wxyz"};

int keypad(int num, string output[]) {
  /* Insert all the possible combinations of the integer number into the output
  string array. You do not need to print anything, just return the number of
  strings inserted into the array.
  */

  if (num == 0 || num == 1) {
    output[0] = "";
    return 1;
  }
  int lastDigit = num % 10;
  int smallNumber = num / 10;
  int smallOutputSize = keypad(smallNumber, output);
  for (int i = 0; i < key[lastDigit].size() - 1; i++) {
    for (int j = 0; j < smallOutputSize; j++) {
      output[j + (i + 1) * smallOutputSize] = output[j];
    }
  }

  int k = 0;
  for (int i = 0; i < key[lastDigit].size(); i++) {
    for (int j = 0; j < smallOutputSize; j++) {
      output[k] = output[k] + key[lastDigit][i];
      k++;
    }
  }

  int total = (key[lastDigit].size()) * (smallOutputSize);
  return total;
}

int main() {
  int num;
  cin >> num;

  string output[10000];
  int count = keypad(num, output);
  for (int i = 0; i < count && i < 10000; i++) {
    cout << output[i] << endl;
  }
  return 0;
}
