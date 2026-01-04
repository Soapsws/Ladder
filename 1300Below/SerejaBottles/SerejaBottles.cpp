#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> caps;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        caps.push_back(pair<int, int>{a, b});
    }

    int un = 0;
    for (int i = 0; i < n; i++)
    {
        bool op = false;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (caps[i].first == caps[j].second)
            {
                op = true;
            }
        }
        if (!op)
            un++;
    }

    cout << un;
}