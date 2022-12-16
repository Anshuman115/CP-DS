#include <bits/stdc++.h>
using namespace std;
// void printvec(vector<int> v)
// {
//     for (int i = 0; i < v.size(); ++i)
//     {
//         /* code */
//         cout << v[i] << " ";
//     }
// }
int main()
{
    int n, q;
    cin >> n >> q;
    // int a[n][];
    vector<int> v[n];
    for (int i = 0; i < n; ++i)
    {
        /* code */
        int n2;
        cin >> n2;
        for (int j = 0; j < n2; ++j)
        {
            /* code */
            int c;
            cin >> c;
            v[i].push_back(c);
        }
    }
    for (int k = 0; k < q; ++k)
    {
        /* code */
        int m, n;
        cin >> m >> n;
        cout << v[m][n] << endl;


    }
    // for (int i = 0; i < n; ++i)
    // {
    //     /* code */
    //     printvec(v[i]);
    //     cout << endl;
    // }

    return 0;
}