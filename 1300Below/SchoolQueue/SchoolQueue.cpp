#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int t;
    cin >> n >> t;

    vector<char> line;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        line.push_back(c);
    }

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (line[i] == 'B' && line[i + 1] == 'G')
            {
                line[i] = 'G';
                line[i + 1] = 'B';
                i++;
            }
        }
    }

    for (char c : line)
    {
        cout << c;
    }
}