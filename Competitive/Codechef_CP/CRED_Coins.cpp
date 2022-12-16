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
        int totalCredCoins = x * y;
        cout << (totalCredCoins / 100) << endl;
    }
}