#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n = 10;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int flag = 0;
        // int count = 0;
        int missing;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[k] == j)
                {
                    /* code */
                    flag = 0;
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                /* code */
                missing = j;
                break;
            }
            else
            {
                missing = 0;
            }
        }
        cout << missing << endl;
    }
    return 0;
}