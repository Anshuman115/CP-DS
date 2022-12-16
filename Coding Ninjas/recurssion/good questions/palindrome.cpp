#include <iostream>
// #include "solution.h"
using namespace std;

int sizeOfArray(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        /* code */
        count++;
    }
    return count;
}

int helper(char input[], int start, int end)
{

    if (start >= end)
    {
        return 1;
    }
    if (input[end] == input[start])
    {
        return helper(input, start + 1, end - 1);
    }
    else
    {
        return 0;
    }
}

bool checkPalindrome(char input[])
{
    // Write your code here
    if (sizeOfArray(input) == 0 || sizeOfArray(input) == 1)
    {
        return true;
    }
    int ans = helper(input, 0, sizeOfArray(input) - 1);
    if (ans == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
