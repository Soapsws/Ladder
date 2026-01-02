#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, t;
    getline(cin, s);
    getline(cin, t);

    map<char, int> cnt;
    for (char c : s)
    {
        if (c == ' ')
            continue;
        cnt[c] = cnt[c] + 1;
    }

    bool possible = true;
    for (char c : t)
    {
        if (c == ' ')
            continue;
        cnt[c] = cnt[c] - 1;
        if (cnt[c] < 0)
        {
            possible = false;
            break;
        }
    }

    if (possible)
        cout << "YES";
    else
        cout << "NO";
}