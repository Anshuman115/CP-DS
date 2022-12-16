#include <iostream>
using namespace std;
// #include "solution.h"

#include <cstring>

// void length(char large[]){
//     int len = strlen(large);
//     cout<<len<<endl;
// }

bool checksequenece(char large[], char *small)
{
    if (strlen(large) == 0)
    {
        return false;
    }
    if (strlen(small) == 0)
    {
        return true;
    }

    if (large[0] == small[0])
    {
        *large++;
        *small++;
    }
    else
    {
        *large++;
    }

    bool ans = checksequenece(large, small);

    return ans;
}

// bool checksequenece(char large[], char *small)
// {
//     bool ans;
//     if (large[1] == '\0' && small[1] != '\0')
//         return false;
//     if (large[0] == small[0] && small[1] == '\0')
//         return true;
//     if (large[0] != small[0] && small[1] == '\0' && large[1] == '\0')
//         return false;
//     if (large[0] == small[0])
//         ans = checksequenece(large + 1, small + 1);
//     else
//         ans = checksequenece(large + 1, small);
//     if (ans == true){
//                 return true;
//     }else
//         return false;
// }

int main()
{
    char large[10000];
    char small[10000];
    cin >> large;
    cin >> small;
    bool x = checksequenece(large, small);

    if (x)
        cout << "true";
    else
        cout << "false";
}
