#include <iostream>
// #include "solution.h"
using namespace std;

// Change in the given string itself. So no need to return or print anything
#include <cstring>
void shift(char input[], int start, int end)
{
    for (int i = end; i >= start; i--)
    {
        input[i + 2] = input[i];
    }
}
void helper(char input[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    if (input[start] == 'p')
    {
        if (input[start + 1] == 'i')
        {
            shift(input, start + 2, strlen(input) - 1);
            input[start] = '3';
            input[start + 1] = '.';
            input[start + 2] = '1';
            input[start + 3] = '4';
            helper(input, start + 4, strlen(input) - 1);
        }
        else
        {
            helper(input, start + 1, strlen(input) - 1);
        }
    }
    else
    {
        helper(input, start + 1, strlen(input) - 1);
    }
}

void replacePi(char input[])
{
    // Write your code here
    int start = 0;
    int end = strlen(input) - 1;
    helper(input, start, end);
}

int main()
{
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
