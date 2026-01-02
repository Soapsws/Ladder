#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<int> letter_counts(26);
    for (char c : s)
    {
        letter_counts[c - 'a']++;
    }

    int odd_count = 0;
    int lc = 0;
    for (int i : letter_counts)
    {
        if (i != 0)
            lc++;
        if (i % 2 == 1)
            odd_count++;
    }

    // aabbccdd

    if (odd_count % 2 == 1 || odd_count < 2)
    {
        cout << "First";
    }
    else
    {
        cout << "Second";
    }
}