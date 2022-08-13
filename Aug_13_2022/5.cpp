#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;
ll testcase;
bool isNotPrime[200001];
vector<ll> primes;

ll solve(ll l, ll r)
{
    ll ret = 0;
    for (ll i = l; i <= r - 2; i++)
    {
        for (ll j = i + 1; j <= r - 1; j++)
        {
            for (ll k = i + 2; k <= r; k++)
            {
                ll firstGcd = 1;
                for (ll pnt = 0; pnt < (ll)primes.size(); pnt++)
                {
                    ll first = i, second = j;
                    ll curPrime = primes[pnt];
                    if (curPrime > first)
                        break;
                    while (first % curPrime == 0 && second % curPrime == 0)
                    {
                        firstGcd *= curPrime;
                        first /= curPrime;
                        second /= curPrime;
                    }
                }
                ll firstLcm = i * j / firstGcd;
                ll secondGcd = 1;
                for (ll pnt = 0; pnt < (ll)primes.size(); pnt++)
                {
                    ll first = firstLcm, second = k;
                    ll curPrime = primes[pnt];
                    if (curPrime > min(first, second))
                        break;
                    while (first % curPrime == 0 && second % curPrime == 0)
                    {
                        secondGcd *= curPrime;
                        first /= curPrime;
                        second /= curPrime;
                    }
                }
                ll finalLcm = firstLcm * k / secondGcd;
                if (finalLcm >= i + j + k)
                {
                    ret++;
                    // cout << firstLcm << " " << i << " " << j << " " << k << "\n";
                }
            }
        }
    }
    return ret;
}
int main()
{
    fastio;
    cin >> testcase;

    for (ll i = 2; i <= 200000; i++)
    {
        if (!isNotPrime[i])
        {
            for (ll j = i + i; j <= 200000; j += i)
            {
                isNotPrime[j] = true;
            }
        }
    }
    for (ll i = 2; i <= 200000; i++)
    {
        if (!isNotPrime[i])
        {
            primes.push_back(i);
        }
    }

    for (ll test = 1; test <= testcase; test++)
    {
        ll l, r;
        cin >> l >> r;
        cout << solve(l, r) << "\n";
    }

    return 0;
}