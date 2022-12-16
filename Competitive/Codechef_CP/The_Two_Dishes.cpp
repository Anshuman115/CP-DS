#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n, sum;
        cin >> n >> sum;
        int arr[n];
        vector<int> diff;
        for (int j = 0; j < n + 1; j++)
        {
            /* code */
            arr[j] = j;
        }
        // for (int m = 0; m < n + 1; m++)
        // {
        //     /* code */
        //     cout << arr[m] << endl;
        // }
        // int sz = sizeof(arr) / sizeof(arr[0]);
        // sort(arr, arr + sz);
        for (int k = 0; k < n + 1; k++)
        {
            /* code */
            int e = arr[k];
            for (int l = k; l < n + 1; l++)
            {
                /* code */
                if (sum - e == arr[l])
                {
                    /* code */
                    int dif = abs(arr[l] - arr[k]);
                    diff.push_back(dif);
                }
            }
        }
        cout << *max_element(diff.begin(), diff.end()) << endl;
        // diff.clear();
    }

    return 0;
}