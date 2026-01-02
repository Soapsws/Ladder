#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> g;
    for (int i = 0; i < 5; i++)
    {
        vector<int> row;
        for (int j = 0; j < 5; j++)
        {
            int n;
            cin >> n;
            row.push_back(n);
        }
        g.push_back(row);
    }

    int max_happ = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                for (int l = 0; l < 5; l++)
                {
                    for (int m = 0; m < 5; m++)
                    {
                        set<int> check_same;
                        check_same.insert(i);
                        check_same.insert(j);
                        check_same.insert(k);
                        check_same.insert(l);
                        check_same.insert(m);
                        if (check_same.size() != 5)
                            continue;

                        max_happ = max(max_happ, g[i][j] + g[j][i] + 2 * (g[k][l] + g[l][k]) +
                                                     2 * (g[l][m] + g[m][l]) + g[j][k] + g[k][j]);
                    }
                }
            }
        }
    }

    cout << max_happ;

    // g[order[0]][order[1]] + g[order[1]][order[0]] + g[order[2]][order[3]] + g[order[3]][order[2]]
    //  + g[order[1]][order[2]] + g[order[2]][order[1]] + g[order[3]][order[4]] + g[order[4]][order[3]]
    //  + g[order[2]][order[3]] + g[order[3]][order[2]]
    //  + g[order[3]][order[4]] + g[order[4]][order[3]]

    // g[order[0]][order[1]] + g[order[1]][order[0]] + 2 * (g[order[2]][order[3]] + g[order[3]][order[2]])
    //  + 2 * (g[order[3]][order[4]] + g[order[4]][order[3]]) + g[order[1]][order[2]] + g[order[2]][order[1]]
}