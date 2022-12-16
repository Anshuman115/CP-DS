#include <iostream>
using namespace std;

// #include "solution.h"

// #include <bits/stdc++.h>

int summ(int n)
{
    return ((n - 2) * (n - 1)) / 2;
}

int findDuplicate(int *arr, int n)
{
    // Write your code here
    //  sort(arr, arr + n);
    //  for(int i=0;i<n-1;i++){
    //      if(arr[i]==arr[i+1]){
    //          return arr[i];
    //      }
    //  }
    // This has O(n^2) Time complexity
    int sumOfNMinus2 = summ(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum - sumOfNMinus2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << findDuplicate(input, size) << endl;
    }

    return 0;
}