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
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int arr2[n];
        for (int j = 0; j < n; j++)
        {
            arr2[j] = arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[k] < arr[j])
                {
                    int temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }
        // for (int j = 0; j < n; j++)
        // {
        //     cout << arr[j] << " ";
        // }
        // cout << endl;
        // for (int j = 0; j < n; j++)
        // {
        //     cout << arr2[j] << " ";
        // }
        // cout << endl;
        int tall = arr[n - 1];
        // cout << "tallest" << tall << endl;
        for (int j = 0; j < n; j++)
        {
            if (arr2[j] == tall)
            {
                /* code */
                cout << j + 1 << endl;
            }
        }
    }
    return 0;
}