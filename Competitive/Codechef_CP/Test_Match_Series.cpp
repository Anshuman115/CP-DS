#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        int arr[5];
        for (int j = 0; j < 5; j++)
        {
            /* code */
            cin >> arr[j];
        }
        int Iwon = 0;
        int Ewon = 0;
        for (int j = 0; j < 5; j++)
        {
            /* code */
            if (arr[j] == 1)
            {
                /* code */
                Iwon++;
            }
            else if (arr[j] == 2)
            {
                /* code */
                Ewon++;
            }
        }
        if (Iwon > Ewon)
        {
            /* code */
            cout << "INDIA" << endl;
        }
        else if (Ewon > Iwon)
        {
            /* code */
            cout << "ENGLAND" << endl;
        }
        else
        {
            /* code */
            cout << "DRAW" << endl;
        }
    }

    return 0;
}