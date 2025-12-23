#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int m;
    cin >> n;
    cin >> m;

    int max = 0;
    int maxTurns = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (ceil((float)val / m) >= maxTurns)
        {
            maxTurns = ceil((float)val / m);
            max = i;
        }
    }

    cout << max + 1;
}