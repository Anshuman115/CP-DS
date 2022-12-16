#include <iostream>

// #include "solution.h"
using namespace std;

#include <cstring>
#include <sstream>

int helper(char input[], int start, int end) {
  if (end - start == 1) {
    // stringstream geek(input[0]);
    int ans2 = input[0] - '0';
    return ans2;
    // int x = 0;
    // geek >> x;
    // return x;
  }
  int ans3 = input[end - 1] - '0';
  int ans4 = helper(input, start, end - 1);
  return (ans4 * 10) + ans3;
}

int stringToNumber(char input[]) {
  // Write your code here
  int start = 0;
  int end = strlen(input);
  // int end = strlen(input) - 1;
  int ans = helper(input, start, end);
}

int main() {
  char input[50];
  cin >> input;
  cout << stringToNumber(input) << endl;
}
