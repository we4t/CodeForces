#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;
ll testcase;
int main()
{
    fastio;
    cin >> testcase;
    for (ll test = 1; test <= testcase; test++)
    {
        ll n;
        cin >> n;
        string query = "";
        vector<ll> winners;
        for (ll i = 1; i <= pow(2, n); i++)
        {
            if (i % 2 == 1)
            {
                query = query + "? " + to_string(i);
            }
            else
            {
                query = query + " " + to_string(i);
                cout << query << "\n";
                fflush(stdout);
                cout.flush();
                string res;
                cin >> res;
                if (res == "1")
                {
                    winners.push_back(i - 1);
                }
                else
                {
                    winners.push_back(i);
                }
                query = "";
            }
        }
        while (true)
        {
            if (winners.size() == 1)
            {
                cout << "! " + to_string(winners[0]) << "\n";
                cout.flush();
                fflush(stdout);
                break;
            }
            else
            {
                vector<ll> tmpVec;
                for (ll i = 0; i < winners.size(); i++)
                {
                    if (i % 2 == 0)
                    {
                        query = query + "? " + to_string(winners[i]);
                    }
                    else
                    {
                        query = query + " " + to_string(winners[i]);
                        cout << query << "\n";
                        fflush(stdout);
                        cout.flush();
                        query = "";
                        string res;
                        cin >> res;
                        if (res == "1")
                        {
                            tmpVec.push_back(winners[i - 1]);
                        }
                        else
                        {
                            tmpVec.push_back(winners[i]);
                        }
                    }
                }
                winners = tmpVec;
            }
        }
    }

    return 0;
}