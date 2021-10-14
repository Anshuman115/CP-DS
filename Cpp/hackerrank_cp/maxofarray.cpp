#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[11];
    int n = 11;
    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }
    array[5] = 5000;

    cout << *std::max_element(array, array + n) << "\n";

    return 0;
}