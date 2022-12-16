#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    for (int i = 0; i < n; ++i)
    {
        /* code */
        getline(cin, s);
        cout << s << endl;
    }
}

