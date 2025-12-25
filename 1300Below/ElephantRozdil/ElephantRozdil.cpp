#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> cities;
    for (int i = 0; i < n; i++)
    {
        int city;
        cin >> city;
        cities.push_back(city);
    }

    int min = 1000000001;
    int minIndex = -1;
    for (int i = 0; i < n; i++)
    {
        int temp = cities[i];
        if (temp < min)
        {
            min = temp;
            minIndex = i;
        }
        else if (temp == min)
        {
            minIndex = -1;
        }
    }

    if (minIndex == -1)
        cout << "Still Rozdil";
    else
        cout << minIndex + 1;
}