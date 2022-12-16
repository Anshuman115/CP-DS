#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int n;
        cin >> n;
        int arr[n];
        vector<int> uniques;
        for (int l = 0; l < n; l++)
        {
            /* code */
            int b;
            cin >> b;
            arr[l] = b;
        }
        for (int j = 0; j < n; j++)
        {
            /* code */
            int flag = 0;
            for (int k = 0; k < n; k++)
            {
                /* code */
                if (arr[j] == arr[k])
                {
                    flag = flag + 1;
                }
            }
            if (flag == 1)
            {
                /* code */
                cout << arr[j] << " ";
                uniques.push_back(arr[j]);
            }
        }
        if (uniques.empty())
        {
            /* code */
            int c = 0;
            cout << c;
        }

        cout << endl;
    }

    return 0;
}