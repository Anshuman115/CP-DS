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
        int count = 0;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                /* code */
                n = n / 2;
            }
            else
            {
                /* code */
                n = (n - 1) / 2;
                count++;
            }
        }
        cout << count + 1 << endl;
    }
    return 0;
}