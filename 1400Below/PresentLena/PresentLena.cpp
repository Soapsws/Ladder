#include <bits/stdc++.h>
using namespace std;

void drawLine(int n, int max);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        drawLine(i, n);
    }
    drawLine(n, n);
    for (int i = n - 1; i >= 0; i--)
    {
        drawLine(i, n);
    }
}
void drawLine(int n, int max)
{
    // Left indentation
    for (int i = 0; i < max - n; i++)
        cout << "  ";

    // Increasing numbers
    for (int i = 0; i < n; i++)
        cout << i << " ";

    // Middle number
    cout << n;

    // Decreasing numbers
    for (int i = n - 1; i >= 0; i--)
        cout << " " << i;

    cout << "\n";
}