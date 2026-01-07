#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> candy;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
                row.push_back((n - i) * n - j);
            else
                row.push_back((n - i) * n - (n - j) + 1);
        }
        candy.push_back(row);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << candy[j][i] << " ";
        }
        cout << "\n";
    }

    // 4

    // 16 15 14 13
    // 9  10 11 12
    // 8  7  6  5
    // 1  2  3  4

    // 3

    // 9 8 7
    // 4 5 6
    // 1 2 3
    // 0 -1 -2
}