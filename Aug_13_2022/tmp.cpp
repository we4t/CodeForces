
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;
int testcase;
bool isNotPrime[200001];
vector<int> primes;
int main()
{
    fastio;
    for (int i = 2; i <= sqrt(200000); i++)
    {
        if (!isNotPrime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= 200000; j += i)
            {
                isNotPrime[j] = true;
            }
        }
    }
    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << "\n";
    }

    return 0;
}