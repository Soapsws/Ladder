#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p < n; ++p)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i < n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }
    return isPrime;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<bool> primes = sieve(1000001);

    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;

        // square root of num must be prime
        long long r = sqrt(num);
        if (r * r != num)
        {
            cout << "NO\n";
            continue;
        }
        int sq = (int)sqrt(num);
        if (primes[sq])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}