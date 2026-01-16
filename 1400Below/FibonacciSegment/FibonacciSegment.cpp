#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> seg;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        seg.push_back(temp);
    }

    int curr = 0;
    int mx = 0;

    for (int i = 2; i < n; i++)
    {
        if (seg[i] == seg[i - 2] + seg[i - 1])
        {
            curr = curr == 0 ? 3 : curr + 1;
            mx = max(mx, curr);
        }
        else
        {
            curr = 0;
        }
    }

    if (n == 1)
        mx = max(mx, 1);
    else
        mx = max(mx, 2);

    cout << mx;
}