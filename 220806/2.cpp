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
        int n, befElement, cnt = 0;
        cin >> n;
        if (n <= 2)
        {
            for (int i = 0; i < n; i++)
            {
                int tmp;
                cin >> tmp;
            }
            cout << "YES\n";
        }
        else
        {
            int bef, cnt = 0;
            cin >> bef;
            bool befRes;
            vector<bool> vec;
            for (int i = 1; i < n; i++)
            {
                int tmp;
                cin >> tmp;
                if (tmp != bef)
                {
                    if (cnt == 0)
                    {
                        befRes = tmp > bef;
                        vec.push_back(befRes);
                        cnt++;
                    }
                    else if (befRes != tmp > bef)
                    {
                        cnt++;
                        befRes = tmp > bef;
                        vec.push_back(befRes);
                    }
                }
                bef = tmp;
            }
            if (cnt > 2)
            {
                cout << "NO\n";
            }
            else
            {
                if (cnt == 2 && vec[0] != true && vec[1] != false)
                {
                    cout << "NO\n";
                }
                else
                {
                    cout << "YES\n";
                }
            }
        }
    }

    return 0;
}