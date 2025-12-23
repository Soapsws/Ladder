#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    cout << (char)toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        cout << s[i];
    }
}