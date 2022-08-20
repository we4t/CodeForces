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
        int n;
        cin >> n;
        vector<ll> vec;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end());
        cout << vec[n - 1] + vec[n - 2] - vec[1] - vec[0] << "\n";
    }

    return 0;
}