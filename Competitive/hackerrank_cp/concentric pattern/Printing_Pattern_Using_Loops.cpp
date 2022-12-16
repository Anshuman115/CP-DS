#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int leng = (2 * n) - 1;
    int minv, minh, min;
    for (int i = 1; i <= leng; i++) //rows
    {
        /* code */
        for (int j = 1; j <= leng; j++) //cols
        {
            /* code */
            minv = i <= leng - i ? i - 1 : leng - i;
            minh = j <= leng - j ? j - 1 : leng - j;
            min = minh <= minv ? minh : minv;
            cout << n - min << " ";
        }
        cout << endl;
    }

    return 0;
}