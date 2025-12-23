#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int year;
    cin >> year;

    for (int i = year + 1; i < 10000; i++)
    {
        string s = to_string(i);
        set<char> st(s.begin(), s.end());
        if (st.size() == 4)
        {
            cout << i;
            break;
        }
    }
}
