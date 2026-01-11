#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int mex = 1;
    vector<int> nums(100000);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums[temp] = 1;
        while (nums[mex] == 1)
            mex++;
    }

    cout << mex;
}