#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int hund = 0;
    int twohund = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 100)
            hund++;
        else
            twohund++;
    }

    bool pos = true;

    if (twohund % 2 == 0)
    {
        if (hund % 2 == 0)
            pos = true;
        else
            pos = false;
    }
    else
    {
        if (hund > 1 && hund % 2 == 0)
            pos = true;
        else
            pos = false;
    }

    if (pos)
        cout << "YES";
    else
        cout << "NO";
}

// It does not matter which one is greater
// IF #200s is even, it depends on whether #100s is even (YES) or odd (NO)
// IF #200s is odd, evens needs to be EVEN and have at least 2 to offset