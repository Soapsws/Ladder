#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int lc = 0;
    int uc = 0;

    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
            lc++;
        else
            uc++;
    }

    if (uc > lc)
    {
        for (char c : s)
        {
            cout << (char)toupper(c);
        }
    }
    else
    {
        for (char c : s)
        {
            cout << (char)tolower(c);
        }
    }
}