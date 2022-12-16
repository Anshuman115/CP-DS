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
        int arr[n] = {1, 2, 1, 1};
        int odd = 0;
        int even = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
            {
                /* code */
                even++;
            }
            else
            {
                /* code */
                odd++;
            }
        }
        if (even > odd)
        {
            /* code */
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 != 0)
                {
                    /* code */
                    cout << j + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            /* code */
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 == 0)
                {
                    /* code */
                    cout << j + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}