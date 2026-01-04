#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 20)
    {
        cout << 15;
    }
    else if (n > 21 || n < 11)
    {
        cout << 0;
    }
    else
    {
        cout << 4;
    }
}