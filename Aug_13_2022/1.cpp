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
        int k, n, ans = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            int tmp;
            cin >> tmp;
            if (i <= k)
            {
                if (tmp > k)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}