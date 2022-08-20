#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;
int testcase;
int main()
{
    fastio;
    cin >> testcase;
    for (int test = 1; test <= testcase; test++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a * d == b * c)
        {
            cout << 0 << "\n";
        }
        else
        {
            ll p = a * d;
            ll q = b * c;
            if (min(p, q) == 0)
            {
                cout << 1 << "\n";
            }
            else if (max(p, q) % min(p, q) == 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 2 << "\n";
            }
        }
    }

    return 0;
}