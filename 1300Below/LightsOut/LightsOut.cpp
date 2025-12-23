#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int grid[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int num;
            cin >> num;
            grid[i][j] = num;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = grid[i][j];
            if (i > 0)
            {
                sum += grid[i - 1][j];
            }
            if (i < 2)
            {
                sum += grid[i + 1][j];
            }
            if (j > 0)
            {
                sum += grid[i][j - 1];
            }
            if (j < 2)
            {
                sum += grid[i][j + 1];
            }

            if (sum % 2 == 0)
                cout << '1';
            else
                cout << '0';
        }
        cout << "\n";
    }
}