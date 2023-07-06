
#include <bits/stdc++.h>
using namespace std;

// Change solve fuction accordingly......

bool solve(int s, int n, int m, vector<vector<int>> &a)
{
    vector<int> count(m);
    int cur = 0;
    for (int j = 0; j < s; ++j)
    {
        int st = cur;
        for (int k = 0; k < s; ++k)
        {
            if (a[k][j] < s)
                cur++;
        }
        count[j] = cur - st;
    }
    if (!cur)
        return 1;
    int lt = cur;
    for (int j = s; j < m; ++j)
    {
        int st = lt;
        for (int k = 0; k < s; ++k)
        {
            if (a[k][j] < s)
                lt++;
        }
        count[j] = lt - st;
        lt -= count[j - s];
        if (!lt)
            return 1;
    }

    for (int i = s; i < n; ++i)
    {
        cur = 0;
        for (int j = 0; j < s; ++j)
        {
            if (a[i][j] < s)
            {
                count[j]++;
            }
            if (a[i - s][j] < s)
            {
                count[j]--;
            }
            cur += count[j];
        }
        if (!cur)
            return 1;
        for (int j = s; j < m; ++j)
        {
            if (a[i][j] < s)
                count[j]++;
            if (a[i - s][j] < s)
                count[j]--;
            cur += count[j];
            cur -= count[j - s];
            if (!cur)
                return 1;
        }
    }
    return 0;
}

int maxGoodLength(vector<vector<int>> &a)
{
    int n = a.size(), m = a[0].size();
    int l = 1, r = min(n, m), mid;
    int ans = 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (solve(mid, n, m, a))
        {
            ans = max(ans, mid);
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}

int main()
{
    int m, n, i, j;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int ans = maxGoodLength(a);
    cout << ans << endl;
}
