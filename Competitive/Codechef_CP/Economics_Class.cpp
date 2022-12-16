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
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr1[i];
        }
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr2[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr1[i] == arr2[i])
            {
                /* code */
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}