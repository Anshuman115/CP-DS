#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int odds = 0;
        int evens = 0;
        vector<int> arr(n), oddnos, evennos;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr[i] % 2 == 0)
            {
                /* code */
                evens++;
                evennos.push_back(arr[i]);
            }
            else
            {
                /* code */
                odds++;
                oddnos.push_back(arr[i]);
            }
        }
        // CASEWORK
        // OddxOdd  = Odd
        // OddxEven = Even
        // EvenxEven = Even
        // EvenxOdd = Even
        // EVEN+EVEN+... = EVEN
        // ODD+ODD+..(odd nos) = ODD
        // ODD+ODD+..(even nos) = EVEN
        //ODD+EVEN = ODD

        //Case 1:-
        // No of odd elements is less than or equal 1 :
        // here if no of odds are 1 or less then the products of all the adjacent pairs will be even and the sum of total will be even.
        // so this case is not possible .
        // Exampple
        // (3,6,8,10,12) = (3.6)+(6.8)+... = even+even+e+... = EVEN.
        if (odds <= 1)
        {
            /* code */
            cout << -1 << endl;
            cout << endl;
        }

        // CASE 2:-
        // No of odds>1 and even no of odds.
        // Here we get odd number of pairs to get odd product. So the possible combination is (odd1,odd2,odd3,...evens...).
        // now sum of products = odd+odd+odd+even+even ... == ODD
        // so this is possible
        // (3,5,5,3,5,4,6,7) = (3,3,5,5,5,7,4,6) - all odds first then all evens.
        // we get (3.3)+(3.5)+(5.5)+(5.5)+(5.7)+(7.4)+(4.6) = odd+odd+odd+odd+odd+even+even =odd+even= ODD  (condition satisfy)
        else if (odds % 2 == 0)
        {
            /* code */
            for (int i = 0; i < oddnos.size(); i++)
            {
                /* code */
                cout << oddnos[i] << " ";
            }
            for (int i = 0; i < evennos.size(); i++)
            {
                /* code */
                cout << evennos[i] << " ";
            }
            cout << endl;
        }

        //CASE 3:-
        //No of odds>1 and odd no of odds.
        // Here we get even pair of odds so adding then up we get even and adding rest even gives us even so not possible
        //here we need to check no. of evens.
        //Sub case 1:-
        //No of evens = 0 , then the total will be even and result -1
        //no of evens >=1 then we can place the zeroes in between the last 1 and second last 1 then we can get a valid combination.
        //example:-
        //(2,3,4,5,7,9,3,13,15) = (3,5,7,9,3,13,2,4,15)
        //(3.5)+..(3.13)+(13.2)+..+(4.15) = odd+odd+..(odds no.)+even+even+..... == ODD
        else
        {
            if (evens == 0)
            {
                /* code */
                cout << -1 << endl;
            }
            else
            {
                /* code */
                for (int i = 0; i < oddnos.size() - 1; i++)
                {
                    /* code */
                    cout << oddnos[i] << " ";
                }
                for (int i = 0; i < evennos.size(); i++)
                {
                    /* code */
                    cout << evennos[it] << " ";
                }
                cout << oddnos[oddnos.size() - 1] << " ";
                cout << endl;
            }
        }
    }
    return 0;
}