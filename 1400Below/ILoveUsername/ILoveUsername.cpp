#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, min, max;
    cin >> n;
    int temp;
    cin >> temp;
    min = temp;
    max = temp;
    int pts = 0;

    for (int i = 1; i < n; i++)
    {
        int t;
        cin >> t;
        if (t < min)
        {
            min = t;
            pts++;
        }
        else if (t > max)
        {
            max = t;
            pts++;
        }
    }

    cout << pts;
}