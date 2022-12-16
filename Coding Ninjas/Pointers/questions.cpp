#include <bits/stdc++.h>
using namespace std;

int main()
{
    int aa = 50;
    int *ptr = &aa;
    cout << (*ptr)++ << " ";
    cout << aa << endl;

    // int *ptr2 = 0;
    // cout << ptr2 << " " << *ptr2;
    // int a2 = 10;
    // *ptr2 = a2;
    // cout << *ptr2 << endl;

    int a = 7;
    int b = 17;
    int *c = &b;
    *c = 7;
    cout << a << " " << b << endl;

    float f = 10.5;
    float p = 2.5;
    float *ptr3 = &f;
    (*ptr3)++;
    *ptr3 = p;
    cout << *ptr3 << " " << f << " " << p;

    int arr[6] = {1, 2, 3};
    int *bp = arr;
    cout << "pointer & array" << bp[2];

    int arrr[] = {1, 2, 3, 4};
    int *p112 = arrr++;
    cout << "good oone " << *p112 << endl;

    return 0;
}