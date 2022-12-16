#include <bits/stdc++.h>
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

int main()
{
    char arr[50];
    cin >> arr;
    cout << sizeOfArray(arr);
    return 0;
}