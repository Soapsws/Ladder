#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int c5 = 0, c0 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5)
            c5++;
        else
            c0++;
    }

    // Need at least one zero to be divisible by 10
    if (c0 == 0)
    {
        cout << -1 << '\n';
        return 0;
    }

    // Largest multiple of 9 we can use
    int use5 = (c5 / 9) * 9;

    // If we can't use any 5s, best valid number is 0
    if (use5 == 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    // Print result
    for (int i = 0; i < use5; i++)
        cout << 5;
    for (int i = 0; i < c0; i++)
        cout << 0;
    cout << '\n';
}