#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;

    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;

    char b2[] = "xyz";
    char *c2 = &b2[0];
    c2++;
    cout << c2 << endl;

    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p[0];

    return 0;
}