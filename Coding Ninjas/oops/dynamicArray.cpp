#include <bits/stdc++.h>
using namespace std;

class dynamicArray {
 private:
  int *data;
  int capacity;
  int nextIndex;

 public:
  dynamicArray() {
    data = new int[5];
    capacity = 5;
    nextIndex = 0;
  }

  // copy constructor
  dynamicArray(dynamicArray const &d) {
    this->data = new int[d.capacity];
    for (int i = 0; i < d.nextIndex; i++) {
      /* code */
      this->data[i] = d.data[i];
    }

    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
  }

  // assignment operator
  void operator=(dynamicArray const &d) {
    this->data = new int[d.capacity];
    for (int i = 0; i < d.nextIndex; i++) {
      /* code */
      this->data[i] = d.data[i];
    }

    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
  }

  // adding
  void add(int element) {
    if (nextIndex == capacity) {
      /* code */
      int *newdata = new int[2 * capacity];
      for (int i = 0; i < capacity; i++) {
        /* code */
        newdata[i] = data[i];
      }
      delete[] data;
      capacity = capacity * 2;
      data = newdata;
    }
    data[nextIndex] = element;
    nextIndex++;
  }

  // getelement at index
  int get(int i) const {
    if (i < nextIndex) {
      /* code */
      return data[i];
    } else {
      return -1;
    }
  }

  // adding elements at certain index
  void add(int index, int element) {
    if (index < nextIndex) {
      /* code */
      data[index] = element;
    } else if (index == nextIndex) {
      add(element);
    } else {
      return;
    }
  }

  void print() const {
    for (int i = 0; i < nextIndex; i++) {
      /* code */
      cout << data[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  dynamicArray d1;

  d1.add(5);

  d1.print();
}