#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    cout << &a << endl;
    int *p = &a;        // p pointer- stores location of variable
    cout << p << endl;  // prints loocation of a
    cout << *p << endl; // prints value at location of a

    cout << sizeof(a) << endl;
    cout << sizeof(p) << endl;

    float f = 10.15;
    float *pf = &f;

    double d = 1223.45;
    double *df = &d;

        return 0;
}