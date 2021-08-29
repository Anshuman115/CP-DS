#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <string.h>

using namespace std;

int main()
{
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif
    int a;
    cin >> a;
    map<string, int> namenumber;
    for (int i = 0; i < a; i++)
    {
        int n;
        string s;
        cin >> s >> n;
        namenumber[s] = n;
    }
    string names;
    while (cin >> names)
    {
        auto it = namenumber.find(names);
        if (it == namenumber.end())
        {
            cout << "Not Found" << endl;
        }
        else
        {
            cout << (*it).first << "=" << (*it).second << "\n";
        }
    }

    return 0;
}