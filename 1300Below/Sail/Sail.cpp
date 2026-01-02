#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, sx, sy, ex, ey;
    string wind;
    cin >> t >> sx >> sy >> ex >> ey >> wind;

    int dx = ex - sx;
    int dy = ey - sy;

    int time_taken = 0;
    for (char c : wind)
    {
        time_taken++;
        if (c == 'N' && dy > 0)
        {
            dy--;
        }
        if (c == 'E' && dx > 0)
        {
            dx--;
        }
        if (c == 'S' && dy < 0)
        {
            dy++;
        }
        if (c == 'W' & dx < 0)
        {
            dx++;
        }
        if (dx == 0 && dy == 0)
        {
            break;
        }
    }

    if (dx == 0 && dy == 0)
    {
        cout << time_taken;
    }
    else
    {
        cout << -1;
    }
}