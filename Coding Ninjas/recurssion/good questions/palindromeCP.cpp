#include <bits/stdc++.h>
#include <cstring>
using namespace std;

bool helper(char input[], int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (input[start] == input[end])
    {
        return helper(input, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}

bool checkPalindrome(char input[])
{
    int start = 0;
    // int end = (sizeof(input)/sizeof(input[0]))-1;
    int end = strlen(input) - 1;
    bool ans = helper(input, start, end);
    return ans;
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
    return 0;
}