#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> seq;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        seq.push_back(cur);
    }
    k--;

    // 3
    // 2 3 1 -> 3 1 1 -> 1 1 1

    // all nums after a point (P) have to be identical.
    // all before P are eventually deleted
    // and k must >= P
    int sto = seq[k];
    bool pos = true;
    for (int i = k; i < n; i++)
    {
        if (seq[i] != sto)
        {
            pos = false;
            break;
        }
    }

    if (!pos)
    {
        cout << -1;
    }
    else
    {
        bool all_same = true;
        for (int i = k; i >= 0; i--)
        {
            if (seq[i] != sto)
            {
                cout << i + 1;
                all_same = false;
                break;
            }
        }
        if (all_same)
        {
            cout << 0;
        }
    }
}