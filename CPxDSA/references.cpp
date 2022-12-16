#include <bits/stdc++.h>
using namespace std;

int change(int &a)
{
    a = 10;
    return a;
}
int main()
{
    int x = 5;
    change(x);
    cout << x;
}

// using reference we can solve problems without 
// using pointers just by using references
// this is not available in c