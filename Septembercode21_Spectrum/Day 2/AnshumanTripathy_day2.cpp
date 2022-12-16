#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int a, b;
        int days = 0;
        cin >> a >> b;
        if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
        {
            days = days + 366;
        }
        else
        {
            days = days + 365;
        }
        if (((b % 4 == 0) && (b % 100 != 0)) || (b % 400 == 0))
        {
            days = days + 366;
        }
        else
        {
            days = days + 365;
        }
        cout << days << endl;
    }

    return 0;
}