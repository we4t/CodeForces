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
        int n, ans = 0, befElement = 0;
        cin >> n;
        bool isZerod[100001] = {
            false,
        };
        vector<int> vec;
        for (int i = 1; i <= n; i++)
        {
            int cur;
            cin >> cur;
            if (isZerod[cur]) // 기존에 있었으면, 벡터에는 중복되는것들이 없기에 그것들을 0으로 바꾸고 진행, 이 때에 벡터 안 넣음
            {
                while (!vec.empty())
                {
                    int bck = vec.back();
                    vec.pop_back();
                    isZerod[bck] = true;
                    ans++;
                }
            }
            else if (cur < befElement) // 다시 갈아 엎어야 하는 상황, 지금은 cur을 벡터에 넣음
            {
                while (!vec.empty())
                {
                    int bck = vec.back();
                    vec.pop_back();
                    isZerod[bck] = true;
                    ans++;
                }
                if(!isZerod[cur])
                    vec.push_back(cur);
            }
            else
            {
                if (cur != befElement)
                    vec.push_back(cur);
            }
            befElement = cur;
        }
        cout << ans << "\n";
    }

    return 0;
}