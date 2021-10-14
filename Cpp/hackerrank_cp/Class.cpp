#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    /* data */
    int age1;
    string s1;
    string s2;
    int stand;

public:
    void set_age(int age2)
    {
        age1 = age2;
    }
    int get_age()
    {
        return age1;
    }
    void set_first_name(string s11)
    {
        s1 = s11;
    }
    string get_first_name()
    {
        return s1;
    }
    void set_last_name(string s22)
    {
        s2 = s22;
    }
    string get_last_name()
    {
        return s2;
    }
    void set_standard(int stand2)
    {
        stand = stand2;
    }
    int get_standard()
    {
        return stand;
    }
    string to_string()
    {
        stringstream ss;
        ss << age1 << "," << s1 << "," << s2 << "," << stand;
        string str2 = ss.str();
        return str2;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}