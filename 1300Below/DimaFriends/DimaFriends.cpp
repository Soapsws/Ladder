#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int fingers = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        fingers += val;
    }
    // cout << fingers;
    int c = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((fingers + i) % (n + 1) != 1)
        {
            // cout << i;
            c++;
        }
    }

    cout << c;
}