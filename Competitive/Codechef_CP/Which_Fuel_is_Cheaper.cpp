#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        for (int i = 0; i < k; i++)
        {
            /* code */
            x = x + a;
            y = y + b;
        }
        if (y > x)
        {
            /* code */
            cout << "PETROL" << endl;
        }
        else if (y < x)
        {
            /* code */
            cout << "DIESEL" << endl;
        }
        else
        {
            /* code */
            cout << "SAME PRICE" << endl;
        }
    }
    return 0;
}