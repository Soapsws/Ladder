#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> laptops;
    for (int i = 0; i < n; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        laptops.push_back(pair<int, int>{ai, bi});
    }

    sort(laptops.begin(), laptops.end());
    for (int i = 0; i < laptops.size() - 1; i++)
    {
        if (laptops[i].first == laptops[i + 1].first)
            continue;
        if (laptops[i].second > laptops[i + 1].second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";
}