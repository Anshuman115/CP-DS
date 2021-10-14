#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    cin >> a;
    string ss[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ss[i];
    }
    for (int i = 0; i < a; i++)
    {
        int leng = ss[i].length();
        if (leng % 2 == 0)
        {
            for (int j = 0; j < leng - 1; j = j + 2)
            {
                cout << ss[i][j];
            }
            cout << " ";
            for (int j = 1; j < leng; j = j + 2)
            {
                cout << ss[i][j];
            }
        }
        else
        {
            for (int j = 0; j < leng; j = j + 2)
            {
                cout << ss[i][j];
            }
            cout << " ";
            for (int j = 1; j < leng - 1; j = j + 2)
            {
                cout << ss[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}

