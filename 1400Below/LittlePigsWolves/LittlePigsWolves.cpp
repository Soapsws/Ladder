#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> board;
    for (int i = 0; i < n; i++)
    {
        vector<char> row;
        for (int j = 0; j < m; j++)
        {
            char temp;
            cin >> temp;
            row.push_back(temp);
        }
        board.push_back(row);
    }

    int eaten = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == '.' || board[i][j] == 'P')
                continue;
            if (j > 0)
            {
                if (board[i][j - 1] == 'P')
                {
                    eaten++;
                    continue;
                }
            }
            if (j < m - 1)
            {
                if (board[i][j + 1] == 'P')
                {
                    eaten++;
                    continue;
                }
            }
            if (i > 0)
            {
                if (board[i - 1][j] == 'P')
                {
                    eaten++;
                    continue;
                }
            }
            if (i < n - 1)
            {
                if (board[i + 1][j] == 'P')
                {
                    eaten++;
                    continue;
                }
            }
        }
    }

    cout << eaten;
}