#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 2 * n - 1;
    int a[max][max];
    int start = 0;
    int end = max - 1;
    while (n != 0)
    {
        /* code */
        for (int i = start; i <= end; i++)
        {
            /* code */
            for (int j = start; j <= end; j++)
            {
                /* code */
                if (i == start || i == end || j == start || j == end)
                { /* code */
                    a[i][j] = n;
                }
            }
        }
        start++;
        end--;
        n--;
    }
    for (int i = 0; i < max; i++)
    {
        /* code */
        for (int j = 0; j < max; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}