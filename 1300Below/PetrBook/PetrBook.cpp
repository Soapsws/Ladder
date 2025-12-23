#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> days;
    for (int i = 0; i < 7; i++)
    {
        int pg;
        cin >> pg;
        days.push_back(pg);
    }

    int curDay = -1;
    while (n > 0)
    {
        curDay = (curDay == 6) ? 0 : (curDay + 1);
        n -= days[curDay];
    }

    cout << curDay + 1;
}