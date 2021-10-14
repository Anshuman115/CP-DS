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
        int arr_odd = 0;
        int arr_even = 0;
        cin >> n;
        int a[n];
        int even_i = n / 2;
        int odd_i = n - even_i;
        for (int k = 0; k < n; k++)
        {
            /* code */
            cin >> a[k];
            if (a[k] % 2 == 0)
            {
                /* code */
                arr_even = arr_even + 1;
            }
            else
            {
                arr_odd = arr_odd + 1;
            }
        }
        int res = min(arr_even, odd_i) + min(arr_odd, even_i);
        cout << res << endl;
    }
    return 0;
}