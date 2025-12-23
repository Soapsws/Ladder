#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int xcoord = 0;
    int ycoord = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                xcoord = i;
                ycoord = j;
            }
        }
    }

    cout << (std::abs(xcoord - 2) + std::abs(ycoord - 2));
}