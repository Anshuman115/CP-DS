#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s;
        cin >> s;
        int total = 26;
        int arr[26];
        for (int k = 97; k < 123; k++)
        {
            /* code */
            // int a = k;
            // char b = a;
            // cout << b;
            arr[k - 97] = k;
        }
        for (int j = 0; j < s.length(); j++)
        {
            char a = s[j];
            int b = a;
            for (int l = 0; l < total; l++)
            {
                if (b == arr[l])
                {
                    for (int m = l; m < (total - 1); m++)
                        arr[m] = arr[m + 1];
                    l--;
                    total--;
                }
            }
        }
        // for (int n = 0; n < total; n++)
        // {
        //     /* code */
        //     cout << arr[n] << ' ';
        // }
        // cout << endl;
        // int size = sizeof(arr) / sizeof(arr[0]);
        // cout << size << endl;
        // cout << total << endl;
        if (total == 0)
        {
            /* code */
            cout << "Pass" << endl;
        }
        else
        {
            /* code */
            cout << "Fail" << endl;
        }
    }
    return 0;
}