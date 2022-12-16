#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string s_rev;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        /* code */
        // s_rev = s_rev + s[i];
        // dont use above line bcoz of time complx
        s_rev.push_back(s[i]);
    }
    cout << s_rev;
    return 0;
}