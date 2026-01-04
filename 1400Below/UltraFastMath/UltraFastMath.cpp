#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    string b;
    cin >> a >> b;

    string sol = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            sol += '1';
        }
        else
            sol += '0';
    }

    cout << sol;
}