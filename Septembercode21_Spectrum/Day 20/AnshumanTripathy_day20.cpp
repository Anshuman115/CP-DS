#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            return false;
        }
    return true;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << n / 2 << endl;
        int m = n;
        for (int j = 2; j < m; j++)
        {
            if (isprime(j))
            {
                /* code */
                while ((n >= j) && (n - j != 1))
                {
                    /* code */
                    n = n - j;
                    cout << j << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}