#include <iostream>
// #include "solution.h"
using namespace std;

int multiplyNumbers(int m, int n)
{
    // Write your code here
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (n > m)
    {
        return multiplyNumbers(n, m);
    }

    int a = multiplyNumbers(m, n - 1);
    return m + a;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
