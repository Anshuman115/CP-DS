#include <bits/stdc++.h>
using namespace std;

// 2d array using dynamic allocation

int main()
{
    int m, n;
    cin >> m >> n;
    int **p = new int *[m];
    for (int i = 0; i < m; i++)
    {
        /* code */
        p[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        /* code */
        delete[] p[i];
    }
    delete[] p;

    return 0;
}