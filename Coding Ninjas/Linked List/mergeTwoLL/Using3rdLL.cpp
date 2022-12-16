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
  //  using third LL
  Node *h1 = head1;
  Node *h2 = head2;
  Node *dummy = new Node(-1);
  Node *h3 = dummy;
  while (h1 != NULL && h2 != NULL) {
    if (h1->data < h2->data) {
      h3->next = h1;
      h1 = h1->next;
    } else {
      h3->next = h2;
      h2 = h2->next;
    }
    h3 = h3->next;
  }
  if (h1 != NULL) {
    h3->next = h1;
  }
  if (h2 != NULL) {
    h3->next = h2;
  }
  return dummy->next;
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