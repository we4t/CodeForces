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
        int n, m, ans = 0;
        cin >> n >> m;
        int arr[n][m];
        vector<pair<int, int>> zeros;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = a[j] - '0';
                if (arr[i][j] == 0)
                {
                    zeros.push_back(make_pair(i, j));
                }
                ans += arr[i][j];
            }
        }

        if (zeros.empty()) // 0이 없어서 한 번에 2개를 없애야 하는 경우
        {
            cout << ans - 2 << "\n";
        }
        else
        {
            bool isAble = false;
            for (int i = 0; i < (int)zeros.size(); i++)
            {
                int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
                int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
                for (int dir = 0; dir < 8; dir++)
                {
                    int row = zeros[i].first + dy[dir];
                    int col = zeros[i].second + dx[dir];
                    if (row >= 0 && row < n && col >= 0 && col < m)
                    {
                        if (arr[row][col] == 0)
                        {
                            isAble = true;
                            break;
                        }
                    }
                }
            }
            if (isAble) // 0이 있고 연속해서 두 개 잇는 경우
            {
                cout << ans << "\n";
            }

            else
            {
                cout << ans - 1 << "\n";
            }
        }
    }

    return 0;
}