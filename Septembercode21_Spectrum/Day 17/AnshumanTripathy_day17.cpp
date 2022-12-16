#include <bits/stdc++.h>
using namespace std;
int lendigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        while (lendigit(n) != 1)
        {
            /* code */
            int squares = 0;
            while (n > 0)
            {
                /* code */
                int m = n % 10;
                squares = squares + m * m;
                n = n / 10;
            }
            n = squares;
        }
        if (n == 1)
        {
            /* code */
            cout << "lucky" << endl;
        }
        else
        {
            /* code */
            cout << "unlucky" << endl;
        }
    }
    return 0;
}