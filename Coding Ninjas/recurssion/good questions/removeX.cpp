#include <iostream>
// #include "solution.h"
using namespace std;

// Change in the given string itself. So no need to return or print anything
#include <cstring>

void shift(char input[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        input[i - 1] = input[i];
    }
    input[end] = '\0';
}
void helper(char input[], int start, int end)
{
    if (start > end)
    {
        return;
    }
    if (input[start] == 'x')
    {
        shift(input, start + 1, strlen(input) - 1);
        helper(input, start, strlen(input) - 1);
    }
    else
    {
        helper(input, start + 1, strlen(input) - 1);
    }
}

void removeX(char input[])
{
    // Write your code here
    int start = 0;
    int end = strlen(input) - 1;
    helper(input, start, end);
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
