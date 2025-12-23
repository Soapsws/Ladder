#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    string s = to_string(n);

    int luck = 0;
    for (char c : s)
    {
        if (c == '4' || c == '7')
            luck++;
    }

    bool almost = true;

    for (char c : to_string(luck))
    {
        if (c != '4' && c != '7')
        {
            almost = false;
            break;
        }
    }

    if (almost)
        cout << "YES";
    else
        cout << "NO";
}