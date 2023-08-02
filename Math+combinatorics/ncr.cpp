/**
 *           author: aakash_172
 *           created: 2023-08-02    03:50:59
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1000000007;

vector<vector<ll>> ncr;
void compute_nCr(ll n, ll r)
{

    ncr.assign(n + 1, vector<ll>(r + 1));
    for (ll i = 1; i <= n; i++)
    {
        ncr[i - 1][0] = 1;
        ncr[i][0] = 1;
        for (int j = 1; j <= r; j++)
        {
            ncr[i][j] = (ncr[i - 1][j - 1] + 0LL + ncr[i - 1][j]) % MOD;
        }
    }
}

int main()
{

    return 0;
}