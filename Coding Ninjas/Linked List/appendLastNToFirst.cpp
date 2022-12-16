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

Node *takeinput() {
  int data;
  cin >> data;
  Node *head = NULL, *tail = NULL;
  while (data != -1) {
    Node *newnode = new Node(data);
    if (head == NULL) {
      head = newnode;
      tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
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

Node *appendLastNToFirst(Node *head, int n) {
  // Write your code here
  int length = 0;
  Node *temp2 = head;
  while (temp2 != NULL) {
    temp2 = temp2->next;
    length++;
  }
  int a = length - n;
  Node *temp = head;
  int i = 0;
  while (temp != NULL && i < a - 1) {
    temp = temp->next;
    i++;
  }
  Node *newNode = head;
  head = temp->next;
  temp->next = NULL;
  Node *newNode2 = head;
  while (newNode2->next != NULL) {
    newNode2 = newNode2->next;
  }
  newNode2->next = newNode;
  return head;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    Node *head = takeinput();
    int n;
    cin >> n;
    head = appendLastNToFirst(head, n);
    print(head);
  }
  return 0;
}
