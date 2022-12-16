#include <iostream>
// #include "solution.h"
using namespace std;

int multiplyNumbers(int m, int n)
{
    // Write your code here
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return m;
    }
    else if (n == 2)
    {
        return m + m;
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
