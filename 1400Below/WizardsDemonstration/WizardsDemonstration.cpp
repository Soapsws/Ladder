#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y;
    cin >> n >> x >> y;

    double goal = ceil((double)n / 100 * y);
    int ans = max(0, (int)goal - x);
    cout << ans;
}