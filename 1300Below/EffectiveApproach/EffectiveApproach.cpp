#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    int m;
    cin >> m;
    vector<int> queries;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        queries.push_back(val);
    }

    long long v = 0;
    long long p = 0;

    vector<int> mapping(n); // indices: quantity value: position
    for (int i = 0; i < n; i++)
    {
        mapping[vec[i] - 1] = i;
    }

    for (int i = 0; i < m; i++)
    {
        v += mapping[queries[i] - 1] + 1;
        p += n - mapping[queries[i] - 1];
    }

    cout << v << " " << p;
}