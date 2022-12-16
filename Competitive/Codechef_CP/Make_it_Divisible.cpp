#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n;
        cin >> n;
        int start = pow(10, n - 1);
        int end = pow(10, n);
        for (int j = start; j < end; j++)
        {
            /* code */
            if (j % 3 == 0 && j % 9 != 0 && j % 2 != 0)
            {
                /* code */
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}