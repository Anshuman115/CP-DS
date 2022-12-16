#include <iostream>

class Node {
 public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

using namespace std;
// #include "solution.h"

void printIthNode(Node *head, int i) {
  Node *temp = head;
  int j = 0;
  if (i == 0 && temp == NULL) {
    return;
  }
  while (j < i && temp != NULL) {
    j++;
    temp = temp->next;
  }
  if (temp == NULL) {
    return;
  } else {
    cout << temp->data;
  }
}

Node *takeinput() {
  int data;
  cin >> data;
  Node *head = NULL, *tail = NULL;
  while (data != -1) {
    Node *newNode = new Node(data);
    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
    cin >> data;
  }
  return head;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Node *head = takeinput();
    int pos;
    cin >> pos;
    printIthNode(head, pos);
    cout << endl;
  }
  return 0;
}