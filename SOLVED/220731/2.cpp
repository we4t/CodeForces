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
        int n, x, ans = 0;
        int start, end;
        cin >> n >> x;
        int arr[n + 1];
        cin >> arr[0];
        start = arr[0] - x;
        end = arr[0] + x;
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            int tmpStart = arr[i] - x, tmpEnd = arr[i] + x;
            if (tmpStart > end || tmpEnd < start)
            {
                ans++;
                start = tmpStart;
                end = tmpEnd;
            }
            else
            {
                start = max(start, tmpStart);
                end = min(end, tmpEnd);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
