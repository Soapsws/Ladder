#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for (int i = 0; i < n; i++)
    {
        int x1;
        int x2;
        int x3;
        cin >> x1;
        cin >> x2;
        cin >> x3;
        c1 += x1;
        c2 += x2;
        c3 += x3;
    }

    cout << ((c1 == c2 && c2 == c3 && c1 == 0) ? "YES" : "NO");
}