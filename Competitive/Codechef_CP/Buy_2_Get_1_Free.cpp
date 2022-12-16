#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, x;
        cin >> n >> x;
        int money;
        // if (n % 3 == 0)
        // {
        //     /* code */
        //     money = ((n / 3) * 2) * x;
        //     cout << money << endl;
        // }
        // else
        // {
        //     /* code */
        //     int y = ((n / 3) * 2);
        //     int z = y + (y / 2);
        //     money = (y + (n - z)) * x;
        //     cout << money << endl;
        // }

        money = ((n / 3) * 2 * x) + ((n % 3) * x);
        cout << money << endl;
        // easy solution
    }
    return 0;
}