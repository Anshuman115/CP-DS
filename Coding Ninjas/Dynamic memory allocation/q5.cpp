#include <iostream>
using namespace std;

#define SQUARE(x) x *x

int main()
{
    int x = 36 / SQUARE(6);
    // bodmas applies here
    cout << x;

    return 0;
}
