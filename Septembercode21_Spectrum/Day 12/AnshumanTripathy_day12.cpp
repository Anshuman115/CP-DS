#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int mat[n][n];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> mat[j][k];
            }
        }
        // for (int j = 0; j < n; j++)
        // {
        //     for (int k = 0; k < n; k++)
        //     {
        //         cout << mat[j][k];
        //     }
        //     cout << "\n";
        //}
        int sumrow0 = 0;
        int sumrown = 0;
        int sumcol0 = 0;
        int sumcoln = 0;
        int diff;
        for (int j = 0; j < n; j++)
        {
            sumrow0 = sumrow0 + mat[0][j];
            sumrown = sumrown + mat[n - 1][j];
            sumcol0 = sumcol0 + mat[j][0];
            sumcoln = sumcoln + mat[j][n - 1];
        }
        int sum1 = sumcol0 + sumcoln;
        int sum2 = sumrow0 + sumrown;
        // cout << "sum1=" << sum1 << endl;
        // cout << "sum2=" << sum2 << endl;
        diff = sum1 - sum2;
        int absdiff = abs(diff);
        cout << absdiff << endl;
    }
    return 0;
}