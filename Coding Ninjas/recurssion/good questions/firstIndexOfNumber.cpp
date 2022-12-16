#include <iostream>
// #include "Solution.h"
using namespace std;

int firstIndex(int input[], int size, int x)
{
    if (size == 0)
    {
        /* code */
        return -1;
    }
    else if (input[0] == x)
    {
        /* code */
        return 0;
    }
    int a = firstIndex(input + 1, size - 1, x);
    if (a == -1)
    {
        return a;
    }
    else
    {
        return a + 1;
    }
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

    cout << firstIndex(input, n, x) << endl;
}
