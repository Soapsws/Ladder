#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    int y;
    int z;

    cin >> x >> y >> z;

    int l = std::sqrt(x * y / z);
    int w = std::sqrt(x * z / y);
    int h = std::sqrt(y * z / x);

    int sum = 4 * l + 4 * w + 4 * h;

    cout << sum;
}