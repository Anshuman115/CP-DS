#include <iostream>
#include <algorithm>
using namespace std;

// #include "solution.h"

int counter(int arr[], int n, int m)
{
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            count2++;
        }
    }
    return count2;
}

int counter(int arr[], int n, int m)
{
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            count2++;
        }
    }
    return count2;
}

int pairSum(int *arr, int n, int num)
{
    // Write your code here
    int i = 0;
    int j = n - 1;
    int count = 0;
    sort(arr, arr + n);
    int onlyOneNum = 0;
    for (int k = 0; k < n - 1; k++)
    {
        if (arr[k] == arr[k + 1])
        {
            onlyOneNum = 1;
        }
        else
        {
            onlyOneNum = 0;
            break;
        }
    }
    while (i < j)
    {
        if (arr[i] + arr[j] > num)
        {
            j--;
        }
        else if (arr[i] + arr[j] < num)
        {
            i++;
        }
        else
        {
            int a = counter(arr, n, arr[i]);
            int b = counter(arr, n, arr[j]);
            if (a == b && arr[i] == arr[j])
            {
                int c = counter(arr, n, arr[i]);
                count = count + (c * (c - 1) / 2);
                i = i + a;
                j = j - b;
                continue;
            }
            if (a > 1 || b > 1)
            {
                count = count + (a * b);
                i = i + a;
                j = j - b;
                continue;
            }
            count++;
            i++;
            j--;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cin >> x;
        // for (int i = 0; i < size; i++)
        // {
        //     /* code */
        //     cout << input[i] << " ";
        // }

        cout << pairSum(input, size, x) << endl;

        delete[] input;
    }

    return 0;
}