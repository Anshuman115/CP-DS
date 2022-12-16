#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    /* data */
    int score[5];

public:
    void input(int a, int b, int c, int d, int e)
    {
        score[0] = a;
        score[1] = b;
        score[2] = c;
        score[3] = d;
        score[4] = e;
    }
    int calculateTotalScore()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            /* code */
            sum = sum + score[i];
        }
        return sum;
    }
};
int main()
{
    int n;
    int grtr = 0;
    cin >> n;
    int arr[n];
    int aaa, bbb, ccc, ddd, eee;
    cin >> aaa >> bbb >> ccc >> ddd >> eee;
    Student st1;
    st1.input(aaa, bbb, ccc, ddd, eee);
    int klr = st1.calculateTotalScore();
    // cout << klr << endl;
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        int aa, bb, cc, dd, ee;
        cin >> aa >> bb >> cc >> dd >> ee;
        Student st;
        st.input(aa, bb, cc, dd, ee);
        arr[i] = st.calculateTotalScore();
        // cout << max_element(arr, arr + n) << endl;
    }
    // int siz = sizeof(arr) / sizeof(arr[0]);
    // cout << *std::max_element(arr, arr + (n - 1)) << endl;
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        if (arr[i] > klr)
        {
            grtr = grtr + 1;
        }
    }
    cout << grtr << endl;

    return 0;
}