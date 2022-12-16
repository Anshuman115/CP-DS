#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;
    float bal;
    cin >> x >> y;
    if (x % 5 == 0 && x + 0.5 <= y)
    {
        /* code */
        bal = y - x - 0.50;
        cout << fixed << setprecision(2) << bal << endl;
    }
    else
    {
        /* code */
        cout << fixed << setprecision(2) << y << endl;
    }

    return 0;
}