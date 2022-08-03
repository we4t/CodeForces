
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;

string getSameAsB(string a, string b)
{
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

int main()
{
    fastio;
    cout << getSameAsB("1010001", "1001");
    return 0;
}