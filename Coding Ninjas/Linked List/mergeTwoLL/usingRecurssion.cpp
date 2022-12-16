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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
  // Write your code here
  if (head1 == NULL) {
    return head2;
  }
  if (head2 == NULL) {
    return head1;
  }
  Node *result;  // its a node pointer
  if (head1->data < head2->data) {
    result = head1;
    result->next = mergeTwoSortedLinkedLists(head1->next, head2);
  } else {
    result = head2;
    result->next = mergeTwoSortedLinkedLists(head1, head2->next);
  }
  return result;
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

void print(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Node *head1 = takeinput();
    Node *head2 = takeinput();
    Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
    print(head3);
  }
  return 0;
}