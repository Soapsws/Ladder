#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> fib(45);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 45; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    bool solved = false;

    for (int i = 0; i < fib.size(); i++)
    {
        // if (fib[i] == n)
        // continue;
        for (int j = 0; j < fib.size(); j++)
        {
            // if (fib[j] == n)
            // continue;
            for (int k = 0; k < fib.size(); k++)
            {
                // if (fib[k] == n)
                // continue;
                if (fib[i] + fib[j] + fib[k] == n)
                {
                    cout << fib[i] << " " << fib[j] << " " << fib[k];
                    solved = true;
                    break;
                }
                if (solved)
                    break;
            }
            if (solved)
                break;
        }
        if (solved)
            break;
    }

    if (!solved)
    {
        cout << "I'm too stupid to solve this problem";
    }
}