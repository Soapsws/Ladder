#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> houses;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        houses.push_back(temp);
    }

    int pos = 1;
    long long cost = 0;
    for (int i = 0; i < m; i++)
    {
        if (houses[i] > pos)
        {
            cost += houses[i] - pos;
        }
        else if (houses[i] < pos)
        {
            cost += (n - pos) + houses[i];
        }
        pos = houses[i];
    }

    cout << cost;
}