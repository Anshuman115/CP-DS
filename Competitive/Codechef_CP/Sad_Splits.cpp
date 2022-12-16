#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //Logic is that if a number is  2345279  then we need to check the last digit as we know the sum of two odd or two even is
        // even. So to get even the last digit of both the parts should be either odd or even.
        // So the last digit will be a last of any of two, so if one is odd then the other must be odd or even then even.
        int lastDigitODDorEVEN = (n % 10) % 2;
        n = n / 10;
        int f = 0;
        while (n > 0)
        {
            /* code */
            if ((n % 10) % 2 == lastDigitODDorEVEN)
            {
                /* code */
                cout << "YES" << endl;
                f = 1;
                break;
            }
            n = n / 10;
        }
        if (f == 0)
        {
            cout << "NO" << endl;
        }
    }
}