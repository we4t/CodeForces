#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;

int testcase;

string getSameAsB(string a, string b)
{
    int cnt = 1;
    // 첫 번째 자리를 동일하게
    if (a[0] != b[0] || a[1] != b[1])
    {
        char tChar = b[0];
        while (a != "" || a[0] != b[0] || a[1] != b[1])
        {
            char char1 = a[0];
            char char2 = a[1];
            if (char1 == tChar)
            {
                a = char1 + a.erase(0, 2);
            }
            else if (char2 == tChar)
            {
                a = char2 + a.erase(0, 2);
            }
            else
            {
                a.erase(0, 1);
            }
            if (a == "" || a.length() <= b.length())
                break;
        }
    }
    if (a[0] == b[0] && a[1] == b[1])
    {
        return a;
    }
    else
    {
        return "";
    }
}

string solve(string a, string b)
{
    if (a.length() >= b.length())
    {
        string result = getSameAsB(a, b);
        if (result == "")
        {
            return "NO\n";
        }
        else if (result == b)
        {
            return "YES\n";
        }
        else if (result.length() <= b.length())
        {
            return "NO\n";
        }
        else
        {
            string cop = result;
            string result1 = solve(result.erase(0, 1), b);
            if (result1 == "YES\n")
            {
                return "YES\n";
            }
            else
            {
                return solve(cop.erase(1, 1), b);
            }
        }
    }
    else
    {
        return "";
    }
}

int main()
{
    fastio;
    cin >> testcase;
    for (int test = 1; test <= testcase; test++)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        // 1. a에서 b 두자리를 만들자.
        // 2. 그렇게 만든 결과값이 b가 안되면
        // 3. 다시 a에서 b 두자리를 만들자.
        cout << solve(a, b);
    }

    return 0;
}