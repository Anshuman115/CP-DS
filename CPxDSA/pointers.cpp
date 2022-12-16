#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    cout << &a << endl << ptr << endl;
    int **p = &ptr;
    cout << p;
    **p = 10;
    cout << endl << a;
    return 0;
}