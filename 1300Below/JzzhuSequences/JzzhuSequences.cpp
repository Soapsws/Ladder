#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll prev, curr, n;
    cin >> prev >> curr >> n;

    // f_i+1 = f_i - f_i-1

    // 2 3 1 -2 -3 -1 2 3 1

    // f_1 = f_1
    // f_2 = f_2
    // f_3 = f_2 - f_1
    // f_4 = f_3 - f_2 = f_2 - f_1 -f_2 = -f_1
    // f_5 = f_4 - f_3 = f_3 - f_2 - f_3 = -f_2
    // f_6 = f_5 - f_4 = -f_2 + f_1 = -f_3

    // f_7 = f_6 - f_5 = -f_3 + f_2 = f_1
    // f_8 = f_3 + f_1 = f_2

    int next;
    n = n % 6;
    if (n == 1)
        next = prev;
    if (n == 2)
        next = curr;
    if (n == 3)
        next = curr - prev;
    if (n == 4)
        next = -1 * prev;
    if (n == 5)
        next = -1 * curr;
    if (n == 0)
        next = prev - curr;

    cout << ((next % 1000000007) + 1000000007) % 1000000007;
}