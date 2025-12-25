#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    char board[n][m];

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            board[i][j] = s[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == '-')
            {
                cout << '-';
                continue;
            }
            if ((i + j) % 2 == 0)
            {
                board[i][j] = 'W';
            }
            else
                board[i][j] = 'B';
            cout << board[i][j];
        }
        cout << "\n";
    }
    // This standard chessboard formation guarantees that even a filled board will have
    // no color adjacents... therefore if some are bad this invariant still holds
}
