#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // input is 994994234324324495959599242345556642
    // 234324324324354545455
    // to deal with long ints use string due to
    // its precision
    cin >> s;
    int a = (int)s[6] - '0';
    cout << a;
    return 0;
}