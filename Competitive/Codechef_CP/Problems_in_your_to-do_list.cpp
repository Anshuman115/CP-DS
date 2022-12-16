#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        int remov = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr[i] >= 1000)
            {
                /* code */
                remov++;
            }
        }
        cout << remov << endl;
    }

    return 0;
}