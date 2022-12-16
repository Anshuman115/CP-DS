#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int x, y;
        cin >> x >> y;
        int salary = 0;
        string s;
        cin >> s;
        for (int j = 0; j < 30; j++)
        {
            /* code */
            if (s[j] == '1')
            {
                /* code */
                salary = salary + x;
            }
        }
        int count1 = 0;
        int streakmax = 0;
        for (int j = 0; j <= 30; j++)
        {
            /* code */
            if (s[j] == '1')
            {
                /* code */
                count1++;
            }
            else
            {
                /* code */
                if (count1 > streakmax)
                {
                    /* code */
                    streakmax = count1;
                }
                count1 = 0;
            }
        }
        salary = salary + (streakmax * y);
        cout << salary << endl;
    }
    return 0;
}