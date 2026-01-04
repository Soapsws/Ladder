#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int lp = 0;
    int rp = n - 1;
    bool perf = true;
    while (lp < rp)
    {
        bool progress = false;
        if (nums[lp] < nums[lp + 1])
        {
            lp++;
            progress = true;
        }
        if (nums[rp] > nums[rp - 1])
        {
            rp--;
            progress = true;
        }
        if (!progress)
        {
            // cout << lp << " " << rp;
            reverse(nums.begin() + lp, nums.begin() + rp + 1);
            perf = false;
            break;
        }
    }

    bool pos = true;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;
        if (nums[i] < nums[i - 1])
            pos = false;
    }

    if (!pos)
    {
        cout << "no";
    }
    else
    {
        cout << "yes\n";
        if (perf)
        {
            cout << "1 1";
        }
        else
        {
            cout << lp + 1 << " " << rp + 1;
        }
    }
}