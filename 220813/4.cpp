#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;
int testcase;

struct cmp
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

int main()
{
    fastio;
    cin >> testcase;
    for (int test = 1; test <= testcase; test++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
            pq.push(make_pair(i, tmp));
        }
        for (int i = 0; i < k; i++)
        {
            pair<int, int> topNode = pq.top();
            pq.pop();
            a[topNode.first] = 1e9;
        }
    }

    return 0;
}