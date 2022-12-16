#include <iostream>
using namespace std;
// #include "solution.h"

#include <bits/stdc++.h>

int maximumProfit(int budget[], int n)
{
    // Write your code here
    sort(budget, budget + n);
    int profits[n];
    for (int i = 0; i < n; i++)
    {
        profits[i] = budget[i] * (n - i);
    }
    sort(profits, profits + n);
    return profits[n - 1];
}

// #include <algorithm>
// int maximumProfit(int budget[], int n)
// {
//     // Write your code here
//     sort(budget, budget + n);
//     int max_profit = budget[0] * n;
//     for (int i = 1; i < n; i++)
//     {
//         if (budget[i] * (n - i) > max_profit)
//             max_profit = budget[i] * (n - i);
//     }
//     return max_profit;
// }

int main()
{
    int n, *input, i, *cost;
    cin >> n;
    input = new int[n];
    for (i = 0; i < n; i++)
        cin >> input[i];

    cout << maximumProfit(input, n) << endl;
}
