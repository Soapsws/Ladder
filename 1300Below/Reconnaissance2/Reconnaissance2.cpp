#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, first;
    cin >> n >> first;

    int prev = first;
    int minDiff = 1001;
    pair<int, int> minIndices;

    for (int i = 1; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (std::abs(curr - prev) < minDiff)
        {
            minDiff = std::abs(curr - prev);
            minIndices = {i, i + 1};
        }
        prev = curr;
    }

    if (std::abs(first - prev) < minDiff)
    {
        minIndices = {1, n};
    }

    cout << minIndices.first << " " << minIndices.second;
}