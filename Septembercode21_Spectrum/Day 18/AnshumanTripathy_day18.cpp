#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n);
int removeDuplicates(int arr[], int n);

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
        bubblesort(arr, n);
        int newn = removeDuplicates(arr, n);
        // for (int j = 0; j < newn; j++)
        // {
        //     cout << arr[j];
        // }
        for (int j = 1; j <= n; j++)
        {
            if (arr[j - 1] != j)
            {
                /* code */
                cout << j << " ";
                int vc = arr[j - 1];
                arr[vc - 1] = vc;
                arr[j - 1] = j;
            }
        }
        cout << endl;
    }
    return 0;
}

int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int temp[n];

    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    }

    temp[j++] = arr[n - 1];

    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }

    return j;
}

void bubblesort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
