#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    bool pos = false;
    cin >> s;
    for (char c : s)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            pos = true;
            break;
        }
    }
    if (pos)
        cout << "YES";
    else
        cout << "NO";
}