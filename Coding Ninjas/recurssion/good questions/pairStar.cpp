#include <iostream>
// #include "solution.h"
using namespace std;

// Change in the given string itself. So no need to return or print the changed string.
#include <cstring>

void shiftRight(char input[], int start, int end)
{
    for (int i = end; i >= start; i--)
    {
        input[i + 1] = input[i];
    }
}

void helper(char input[], int start, int end)
{
    if (start > end)
    {
        return;
    }
    if (input[start] == input[start + 1])
    {
        shiftRight(input, start, strlen(input));
        input[start + 1] = '*';
        helper(input, start + 2, strlen(input));
    }
    else
    {
        helper(input, start + 1, strlen(input));
    }
}

void pairStar(char input[])
{
    // Write your code here
    int start = 0;
    int end = strlen(input);
    // int end = strlen(input) - 1;
    helper(input, start, end - 1);
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}
