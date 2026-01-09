#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;

        double n = (double)360 / (180 - a);
        if (floor(n) == floor(n + 0.99))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}