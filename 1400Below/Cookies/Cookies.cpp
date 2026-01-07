#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, sum;
    sum = 0;
    vector<int> cookies;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        cookies.push_back(temp);
    }

    int c = 0;
    for (int i : cookies)
    {
        if ((sum - i) % 2 == 0)
            c++;
    }

    cout << c;
}