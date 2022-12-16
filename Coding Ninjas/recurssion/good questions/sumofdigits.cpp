#include <iostream>
// #include "solution.h"
using namespace std;

int sumOfDigits(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
}
