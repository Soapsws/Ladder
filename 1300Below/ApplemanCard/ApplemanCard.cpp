#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    map<char, int> counts;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        counts[c] = counts[c] + 1;
    }

    // a

    vector<int> nums;
    for (auto p : counts)
    {
        nums.push_back(p.second);
    }

    sort(nums.begin(), nums.end());
    ll pts = 0;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        ll times = min(k, nums[i]);
        pts += times * times;
        k -= times;
        if (k <= 0)
            break;
    }

    cout << pts;
}