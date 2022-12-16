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
        string s;
        cin >> s;
        int flag = 0;
        //east=1,south=2,west=3,north=4
        for (int j = 0; j < n; j++)
        {
            for (int len = 1; len <= n - j; len++)
            {
                string substr = s.substr(j, len);
                int tokyo = 2;
                for (int k = 0; k < substr.length(); k++)
                {
                    /* code */
                    if (substr[k] == 'L')
                    {
                        /* code */
                        tokyo--;
                    }
                    else
                    {
                        /* code */
                        tokyo++;
                    }
                }
                if (tokyo % 4 == 0)
                {
                    /* code */
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                /* code */
                break;
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