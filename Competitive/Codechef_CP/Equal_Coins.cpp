#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int xT, yT;
        xT = x * 1;
        yT = y * 2;
        int totalmoney = yT + xT;
        // int half = totalmoney / 2;
        if (x == 0 && y % 2 == 0)
        {
            /* code */
            cout << "YES" << endl;
        }
        else if (x == 0 && y % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (totalmoney % 2 == 0)
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            /* code */
            cout << "NO" << endl;
        }
    }
    return 0;
}