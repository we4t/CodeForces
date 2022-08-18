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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> vec;
        if (k % 4 == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if (k % 4 == 1)
            {
                for (int i = 1; i <= n; i += 2)
                {
                    cout << i << " " << i + 1 << "\n";
                }
            }
            else if (k % 4 == 2)
            {
                for (int i = 1; i <= n; i += 2)
                {
                    if (i % 4 == 1)
                    {
                        cout << i + 1 << " " << i << "\n";
                    }
                    else
                    {
                        cout << i << " " << i + 1 << "\n";
                    }
                }
            }
            else if (k % 4 == 3)
            {
                for (int i = 1; i <= n; i += 2)
                {
                    cout << i << " " << i + 1 << "\n";
                }
            }
        }
    }

    return 0;
}