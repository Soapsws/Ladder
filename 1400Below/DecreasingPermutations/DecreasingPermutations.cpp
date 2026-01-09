#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> nums;
    for (int i = 1; i <= n; i++)
    {
        nums.push_back(i);
    }

    if (k != 0)
    {
        reverse(nums.begin() + n - k - 1, nums.end());
    }

    for (int i : nums)
    {
        cout << i << " ";
    }
}