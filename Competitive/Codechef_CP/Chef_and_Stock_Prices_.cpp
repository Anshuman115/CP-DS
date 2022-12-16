#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, a, b, c;
        cin >> s >> a >> b >> c;
        float m = (float)c / 100;
        float ns = s + (m * s);
        if (ns >= a && ns <= b)
        {
            /* code */
            cout << "Yes" << endl;
        }
        else
        {
            /* code */
            cout << "No" << endl;
        }
    }
    return 0;
}