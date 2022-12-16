#include <iostream>
#include <string>
using namespace std;

// #include "solution.h"

#include <stack>
bool isBalanced(string str) {
  stack<char> s;
  for (int i = 0; i < str.length(); i++) {
    if (s.empty() && (str[i] == '}' || str[i] == ')' || str[i] == ']')) {
      return false;
    }
    if (str[i] == '{' || str[i] == '(' || str[i] == '[') {
      s.push(str[i]);
    } else if (str[i] == '}') {
      if (s.top() == '{') {
        s.pop();
      } else {
        return false;
      }
    } else if (str[i] == ']') {
      if (s.top() == '[') {
        s.pop();
      } else {
        return false;
      }
    } else if (str[i] == ')') {
      if (s.top() == '(') {
        s.pop();
      } else {
        return false;
      }
    }
  }
  if (s.empty()) {
    return true;
  } else {
    return false;
  }
}

int main() {
  string input;
  cin >> input;
  cout << ((isBalanced(input)) ? "true" : "false");
}