#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, d;
    cin >> n >> m >> d;

    vector<int> nums;

    for (int i = 0; i < n * m; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    bool pos = true;
    int rem = nums[0] % d;
    for (int i = 0; i < n * m; i++)
    {

        if (nums[i] % d != rem)
        {
            pos = false;
            break;
        }
        nums[i] = nums[i] / d;
    }

    if (pos)
    {
        sort(nums.begin(), nums.end());
        int score = 0;
        for (int i : nums)
        {
            score += abs(i - nums[m * n / 2]);
        }
        cout << score;
    }

    else
        cout << -1;
}