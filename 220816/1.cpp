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
        int a, b;
        cin >> a >> b;
        if ((a + b) % 2 == 0)
        {
            cout << "Tonya\n";
        }
        else
        {
            cout << "Burenka\n";
        }
    }

    return 0;
}