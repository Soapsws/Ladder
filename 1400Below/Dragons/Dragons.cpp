#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons;
    for (int i = 0; i < n; i++)
    {
        int xi, yi;
        cin >> xi >> yi;
        dragons.push_back(pair<int, int>{xi, yi});
    }
    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++)
    {
        if (s <= dragons[i].first)
        {
            cout << "NO";
            return 0;
        }
        s += dragons[i].second;
    }

    cout << "YES";
}