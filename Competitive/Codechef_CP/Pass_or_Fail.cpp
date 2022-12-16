#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n, x, p;
        cin >> n >> x >> p;
        int correct = x * 3;
        int incorrect = n - x;
        int finalScore = correct - incorrect;
        if (finalScore >= p)
        {
            /* code */
            cout << "PASS" << endl;
        }
        else
        {
            /* code */
            cout << "FAIL" << endl;
        }
    }
    return 0;
}