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
        vector<int> vec;
        for (int i = n; i >= 2; i -= 2)
        {
            vec.push_back(i - 1);
            vec.push_back(i);
        }
        if (n % 2 == 1)
        {
            vec.push_back(1);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}