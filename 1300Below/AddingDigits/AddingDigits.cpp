#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, n;
    cin >> a >> b >> n;

    string sol = "" + to_string(a);
    bool pos = false;
    ;

    for (int i = 0; i < 10; i++)
    {
        if (((a * 10 + i) % b) == 0)
        {
            sol += to_string(i);
            pos = true;
            break;
        }
    }

    if (!pos)
    {
        cout << -1;
        return 0;
    }

    while (n > 1)
    {
        sol += '0';
        n--;
    }

    cout << sol;
}

// 5 % 3 = 2
// 50 % 3 = 2
// (50 + 5) % 3 = 1
// a % b = x
// 10 * a % b = ((a % b) * 10) % b
// (10 * a + c) % b = ((a % b) * 10 + c % b) % b