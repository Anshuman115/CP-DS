#include <bits/stdc++.h>
using namespace std;

int findscore(int m, int n, int o)
{
    int score;
    score = m + n * o / m - n;
    return score;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int score1 = findscore(a, b, c);
        cout << score1 << endl;
    }

    return 0;
}