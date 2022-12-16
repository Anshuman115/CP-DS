#include <iostream>
// #include "solution.h"
using namespace std;

// Given an integer array A of size N, check if the input array can be splitted in two parts such that -
// - Sum of both parts is equal
// - All elements in the input, which are divisible by 5 should be in same group.
// - All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
// - Elements which are neither divisible by 5 nor by 3, can be put in any group.

bool helper(int arr[], int n, int start, int ls, int rs)
{
    if (start == n)
        return ls == rs;
    if (arr[start] % 5 == 0)
        ls += arr[start];
    else if (arr[start] % 3 == 0)
        rs += arr[start];
    else
        return helper(arr, n, start + 1, ls + arr[start], rs) + helper(arr, n, start + 1, ls, rs + arr[start]);
    return helper(arr, n, start + 1, ls, rs);
}

bool splitArray(int *input, int size)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return helper(input, size, 0, 0, 0);
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[1 + size];

    for (int i = 0; i < size; i++)
        cin >> input[i];

    if (splitArray(input, size))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
