/**
 *           author: aakash_172
 *           created: 2023-08-04    00:31:44
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// we consider 1-based indexing here

vector<vector<ll>> dp;
void calculate(vector<vector<ll>> &mat)
{
    int n = mat.size(), m = mat[0].size();
    dp.assign(n, vector<ll>(m));
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            dp[i][j] = mat[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }
}

ll query(ll x1, ll y1, ll x2, ll y2)
{
    return dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1];
}

int main()
{

    return 0;
}