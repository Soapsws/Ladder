#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2)
    {
        int x3 = x1 + (abs(y1 - y2));
        cout << x3 << " " << y1 << " " << x3 << " " << y2;
    }
    else if (y1 == y2)
    {
        int y3 = y1 + abs(x1 - x2);
        cout << x1 << " " << y3 << " " << x2 << " " << y3;
    }
    else
    {
        if (abs(x1 - x2) != abs(y1 - y2))
        {
            cout << -1;
            return 0;
        }
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
}