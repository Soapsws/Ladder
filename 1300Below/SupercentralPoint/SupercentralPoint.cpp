#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> coords;
    for (int i = 0; i < n; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        coords.push_back(std::pair<int, int>{x, y});
    }
    sort(coords.begin(), coords.end());
    // Sorted by first
    // If first is equal, sorts by second
    // Therefore if two consecutive elements have the same first, lower one comes first
    int count = 0;

    for (int i = 1; i < coords.size() - 1; i++)
    {
        if (coords[i - 1].first != coords[i + 1].first)
            continue;
        bool below = false;
        bool above = false;
        for (int j = 0; j < coords.size(); j++)
        {
            if (coords[j].second != coords[i].second)
                continue;
            if (coords[j].first < coords[i].first)
                below = true;
            if (coords[j].first > coords[i].first)
                above = true;
        }

        if (below && above)
            count++;
    }

    cout << count;
}