#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int> nums_cnts(7);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums_cnts[temp - 1]++;
    }

    if (nums_cnts[4] != 0 || nums_cnts[6] != 0)
    {
        cout << -1;
    }
    else
    {
        if (nums_cnts[0] != n / 3)
        {
            cout << -1;
        }
        else
        {
            if (nums_cnts[1] < nums_cnts[3])
            {
                cout << -1;
            }
            else
            {
                if (nums_cnts[1] + nums_cnts[2] != nums_cnts[3] + nums_cnts[5])
                {
                    cout << -1;
                }
                else
                {
                    for (int i = 0; i < nums_cnts[3]; i++)
                    {
                        cout << "1 2 4\n";
                    }
                    for (int i = 0; i < nums_cnts[1] - nums_cnts[3]; i++)
                    {
                        cout << "1 2 6\n";
                    }
                    for (int i = 0; i < nums_cnts[2]; i++)
                    {
                        cout << "1 3 6\n";
                    }
                }
            }
        }
    }

    // 1 divides ALL
    // 2, 3, 5, 7 are PRIME
    // 4 divides {1, 2}; 6 divides {1, 2, 3}

    // Therefore the only possible sequence a,b,c ST a divides b, b divides c are:
    // 1 / 2 / 4
    // 1 / 2 / 6
    // 1 / 3 / 6

    // Rules for a VALID set
    // Needs n / 3 (1)s
    // Cannot contain 5, 7
    // Number of (2)s >= (4)s AND number of (2)s + (3)s == number of (4)s + (6)s
}
