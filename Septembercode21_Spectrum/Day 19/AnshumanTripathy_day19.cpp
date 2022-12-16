#include <bits/stdc++.h>
using namespace std;
void repeated(int arr[], int n)
{
    int f = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        cout << "Gentle" << endl;
    else
        cout << "Steep" << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        repeated(arr, n);
    }
    return 0;
}