#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;
ll testcase;

struct triple
{
    ll first, second, third;
};

bool cmp(triple a, triple b)
{
    return a.second < b.second;
}

int main()
{
    fastio;
    cin >> testcase;
    for (ll test = 1; test <= testcase; test++)
    {
        ll n, q;
        cin >> n >> q;

        deque<pair<ll, ll>> dq;
        vector<triple> questions;
        vector<ll> ans(q + 1);
        ll wllime[n + 1];
        ll maxIndex;
        fill(wllime, wllime + n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            ll tmp;
            cin >> tmp;
            dq.push_back(make_pair(i, tmp));
            if (tmp == n)
                maxIndex = i;
        }
        ll maxRound = 0;
        for (ll question = 1; question <= q; question++)
        {
            ll a, b;
            cin >> a >> b;
            maxRound = max(maxRound, b);
            questions.push_back({a, b, question});
        }
        sort(questions.begin(), questions.end(), cmp);
        ll questionIndex = 0;
        for (ll round = 1; round <= maxRound; round++)
        {
            pair<ll, ll> a = dq.front();
            dq.pop_front();
            pair<ll, ll> b = dq.front();
            dq.pop_front();
            // dq : 순번, 힘
            // question : 선수 번호, 라운드, 질문 번호
            if (a.second > b.second)
            {
                wllime[a.first] += 1;
                dq.push_front(a);
                dq.push_back(b);
            }
            else
            {
                wllime[b.first] += 1;
                dq.push_front(b);
                dq.push_back(a);
            }
            if (questions[questionIndex].second == round)
            {
                while (questions[questionIndex].second == round)
                {
                    ans[questions[questionIndex].third] = wllime[questions[questionIndex].first];
                    questionIndex++;
                }
            }
            if (round == maxIndex)
                break;
            if (questionIndex == q)
                break;
        }
        while (questionIndex < q)
        {
            ll curRound = questions[questionIndex].second;
            ll athleteIndex = questions[questionIndex].first;
            if (athleteIndex == maxIndex)
            {
                ans[questions[questionIndex].third] = wllime[maxIndex] + curRound - maxIndex;
            }
            else
            {
                ans[questions[questionIndex].third] = wllime[athleteIndex];
            }
            questionIndex++;
        }
        for (ll i = 1; i <= q; i++)
        {
            cout << ans[i] << "\n";
        }
    }

    return 0;
}