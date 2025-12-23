#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<char> letters;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        letters.push_back(c);
    }

    char prev = letters[0];
    int cnt = 0;

    for (int i = 1; i < n; i++)
    {
        if (letters[i] == prev)
            cnt++;
        else
            prev = letters[i];
    }

    cout << cnt;
}