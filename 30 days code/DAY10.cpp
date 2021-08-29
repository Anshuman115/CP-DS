#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // #ifndef ONLINE_JUDGE

    //     freopen("input.txt", "r", stdin);

    //     freopen("output.txt", "w", stdout);

    // #endif
    int n = 10;
    int binary[32];
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];
    stringstream ss;
    for (int i = 3; i >= 0; i--)
    {
        ss << binary[i];
    }
    int ss2;
    ss >> ss2;
    cout << endl
         << ss2;
    // int a = 0;
    // for (int i = 0; binary[i] != '\0'; i++)
    // {
    //     /* code */
    //     a = a + 1;
    // }

    // cout << endl
    //      << a;
    // string s;
    // s = to_string(binary);
    // for (int i = 0; i < sizeof(binary); i++)
    // {
    //     /* code */
    // }

    return 0;
}