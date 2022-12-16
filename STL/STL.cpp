#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 4> arr = {1, 2, 3, 7};
    cout << arr.at(3) << endl;

    vector<int> vec2;
    cout << vec2.capacity() << endl;
    vec2.push_back(5);
    cout << vec2.capacity() << endl;
    vec2.pop_back();
    cout << vec2.capacity() << endl;
    vec2.clear();
    cout << vec2.capacity() << endl;
    cout << vec2.size() << endl;

    deque<int> d;
    d.push_back(1);
    d.push_front(4);
    d.erase(d.begin(), d.begin() + 1);

    list<int> l;
    l.push_back(1);
    l.push_front(2);
    return 0;
}