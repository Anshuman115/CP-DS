#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int arr[7];
        int snyday = 0;
        int rnyday = 0;
        for (int k = 0; k < 7; k++)
        {
            /* code */
            cin >> arr[k];
        }

        for (int j = 0; j < 7; j++)
        {
            /* code */
            if (arr[j] == 1)
            {
                /* code */
                snyday = snyday + 1;
            }
            else if (arr[j] == 0)
            {
                /* code */
                rnyday = rnyday + 1;
            }
        }
        if (snyday > rnyday)
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}