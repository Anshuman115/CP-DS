#include <iostream>
// #include "Solution.h"
using namespace std;

bool checkNumber(int input[], int size, int x)
{
    if (size == 0)
    {
        /* code */
        return false;
    }
    else if (input[0] == x)
    {
        /* code */
        return true;
    }

    return checkNumber(input + 1, size - 1, x);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    if (checkNumber(input, n, x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}