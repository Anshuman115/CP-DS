#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int arr[3];
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cin >> arr[j];
        }
        int flag = 0;
        for (int j = 0; j < 3; j++)
        {
            /* code */
            if (arr[j] == 7)
            {
                /* code */
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            /* code */
            cout << "NO" << endl;
        }
    }

    return 0;
}