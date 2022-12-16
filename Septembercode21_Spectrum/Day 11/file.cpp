#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int steps = 0;
        while (n > 1)
        {
            /* code */
            int n1;
            int n2;
            steps = steps + 1;
            if (n % 2 == 0)
            {
                /* code */
                n = n / 2;
            }
            else
            {
                n1 = n / 2;
                n2 = n - n1;
                if (n1 > n2)
                {
                    /* code */
                    n = n2;
                }
                else if (n2 > n1)
                {
                    /* code */
                    n = n1;
                }
                else
                {
                    /* code */
                    n = n1;
                }
            }
        }
        cout << steps << endl;
    }
    return 0;
}