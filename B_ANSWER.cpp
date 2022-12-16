#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        m = n % 10;
        count++;
        n = n / 10;
    }
    if (count <= 3)
    {
        /* code */
        cout << count << endl;
    }
    else
    {
        /* code */
        cout << "More than 3 digits" << endl;
    }

    return 0;
}