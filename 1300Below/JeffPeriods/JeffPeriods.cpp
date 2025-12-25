#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int valid = 0;
    vector<int> prev(100001);
    vector<int> seq(100001);
    for (int i = 0; i < n; i++)
    {
        if (seq[nums[i]] == -2)
            continue;
        if (seq[nums[i]] == 0) // first occurrence
        {
            seq[nums[i]] = -1;
            prev[nums[i]] = i;
            valid++;
        }
        else if (seq[nums[i]] == -1)
        {
            seq[nums[i]] = i - prev[nums[i]];
            prev[nums[i]] = i;
        }
        else
        {
            if (i - prev[nums[i]] == seq[nums[i]])
            {
                prev[nums[i]] = i;
            }
            else
            {
                seq[nums[i]] = -2;
                valid--;
            }
        }
    }

    cout << valid << "\n";
    for (int i = 0; i < seq.size(); i++)
    {
        if (seq[i] == -1)
        {
            cout << i << " " << 0;
        }
        else if (seq[i] > 0)
        {
            cout << i << " " << seq[i];
        }
        cout << "\n";
    }
}