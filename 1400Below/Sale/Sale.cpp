#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> tvs;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        tvs.push_back(temp);
    }
    sort(tvs.begin(), tvs.end());
    int win = 0;
    for (int i = 0; i < m; i++)
    {
        win -= min(tvs[i], 0);
    }
    cout << win;
}