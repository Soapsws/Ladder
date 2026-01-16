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
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    // Get the largest positive in front, get the largest negative in the back
    // Middle arranged reverse sorted order???

    sort(nums.begin(), nums.end());
    cout << nums[n - 1] << " ";
    for (int i = 1; i < n - 1; i++)
    {
        cout << nums[i] << " ";
    }
    cout << nums[0];

    // -2 -1 0 1 2
    // -> 2 -1 0 1 -2
    // 3 + (-1 ) + (-1) + 3 = 4
    // -> 2 1 0 -1 -2
    // 1 + 1 + 1 + 1 == 4
    // -> 2 0 -1 1 2
    // 2 + 1 + (-2) + (-1) = 0
    // -> 2 -1 1 0 2
}