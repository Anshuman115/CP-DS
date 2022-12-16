#include <iostream>
// #include "solution.h"
using namespace std;

int countZeros(int n)
{
    // Write your code here
    if (n == 0)
    {
        return 1;
    }
    else if (n / 10 == 0)
    {
        return 0;
    }
    int x;
    if (n % 10 == 0)
    {
        x = 1;
    }
    else
    {
        x = 0;
    }
    return x + countZeros(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << n / 10 << endl;
    cout << countZeros(n) << endl;
}
