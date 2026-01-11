#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> stones;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        stones.push_back(temp);
    }

    vector<ll> prefixUnsorted(n);
    prefixUnsorted[0] = stones[0];
    for (int i = 1; i < n; i++)
    {
        prefixUnsorted[i] = stones[i] + prefixUnsorted[i - 1];
    }
    sort(stones.begin(), stones.end());
    vector<ll> prefixSorted(n);
    prefixSorted[0] = stones[0];
    for (int i = 1; i < n; i++)
    {
        prefixSorted[i] = stones[i] + prefixSorted[i - 1];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int query;
        cin >> query;
        int l, r;
        cin >> l >> r;
        if (query == 1)
        {
            if (l == r)
                cout << prefixUnsorted[l - 1] - (l > 1 ? prefixUnsorted[l - 2] : 0) << "\n";
            else
            {
                cout << prefixUnsorted[r - 1] - (l > 1 ? prefixUnsorted[l - 2] : 0) << "\n";
            }
        }
        else
        {
            if (l == r)
                cout << stones[l - 1] << "\n";
            else
            {
                cout << prefixSorted[r - 1] - (l > 1 ? prefixSorted[l - 2] : 0) << "\n";
            }
        }
    }
}