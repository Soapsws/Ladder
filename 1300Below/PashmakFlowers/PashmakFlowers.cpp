#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<int> flowers;
    for (long long i = 0; i < n; i++)
    {
        int f;
        cin >> f;
        flowers.push_back(f);
    }

    sort(flowers.begin(), flowers.end());
    long long maxDif = flowers[n - 1] - flowers[0];
    long long numLeast = 0;
    long long numMost = 0;
    for (int i = 0; i < flowers.size(); i++)
    {
        if (flowers[i] == flowers[0])
            numLeast++;
        else if (flowers[i] == flowers[n - 1])
            numMost++;
    }

    if (flowers[0] == flowers[n - 1])
        cout << maxDif << " " << n * (n - 1) / 2;

    else
        cout << maxDif << " " << numLeast * numMost;
}