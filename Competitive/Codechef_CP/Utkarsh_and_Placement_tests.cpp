#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        char arr[3];
        for (int i = 0; i < 3; i++)
        {
            /* code */
            cin >> arr[i];
        }
        char x, y;
        cin >> x >> y;
        for (int i = 0; i < 3; i++)
        {
            /* code */
            if (arr[i] == x)
            {
                /* code */
                cout << x << endl;
                break;
            }
            else if (arr[i] == y)
            {
                /* code */
                cout << y << endl;
                break;
            }
        }
    }
    return 0;
}