#include <bits/stdc++.h>
using namespace std;

vector<long long> lucky;

void gen(long long x)
{
    if (x > 1e10)
        return;
    if (x > 0)
        lucky.push_back(x);
    gen(x * 10 + 4);
    gen(x * 10 + 7);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long l, r;
    cin >> l >> r;

    gen(0);
    sort(lucky.begin(), lucky.end());

    long long ans = 0;
    long long cur = l;

    for (long long L : lucky)
    {
        if (L < cur)
            continue;
        if (cur > r)
            break;

        long long end = min(r, L);
        ans += (end - cur + 1) * L;
        cur = end + 1;
    }

    cout << ans << "\n";
    return 0;
}
