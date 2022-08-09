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
        vector<int> arr;
        int curSqrtNum = ceil(sqrt(n - 1)), maxUseNum = n - 1;
        bool isWrong = false;
        for (int i = n - 1; i >= 0; i--)
        {
            int curNum = curSqrtNum * curSqrtNum - i;
            if (curNum > maxUseNum)
            {
                i++;
                curSqrtNum--;
                if (curSqrtNum < 0)
                {
                    cout << "-1\n";
                    isWrong = true;
                    break;
                }
            }
            else
            {
                arr.push_back(curNum);
                for (int j = curNum + 1; j <= maxUseNum; j++)
                {
                    arr.push_back(j);
                    i--;
                }
                maxUseNum = curNum - 1;
                curSqrtNum--;
            }
        }
        if (!isWrong)
        {
            for (int i = (int)arr.size() - 1; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}