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
        int xmin = 0, xmax = 0, ymin = 0, ymax = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a != 0)
            {
                xmin = min(xmin, a);
                xmax = max(xmax, a);
            }
            if (b != 0)
            {
                ymin = min(ymin, b);
                ymax = max(ymax, b);
            }
        }
        cout << 2 * (xmax - xmin) + 2 * (ymax - ymin) << "\n";
    }

    return 0;
}