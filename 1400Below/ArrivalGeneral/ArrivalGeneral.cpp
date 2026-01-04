#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int maxH = 0;
    int maxHi = 0;
    int minH = 1000;
    int minHi = 0;
    vector<int> soldiers;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp > maxH)
        {
            maxH = temp;
            maxHi = i;
        }
        if (temp <= minH)
        {
            minH = temp;
            minHi = i;
        }
        soldiers.push_back(temp);
    }

    // cout << maxHi << " " << minHi;

    if (maxHi < minHi)
    {
        cout << maxHi + (n - minHi - 1);
    }
    else
    {
        cout << maxHi + (n - minHi - 1 - 1);
    }
}