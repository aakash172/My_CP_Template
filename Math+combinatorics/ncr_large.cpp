/**
 *           author: aakash_172
 *           created: 2023-08-02    17:13:43
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1000000007;
ll power(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

ll mmi(ll b)
{
    return power(b, mod - 2);
}

const ll lim = 100002;
ll fact[lim + 1];

void prec()
{
    fact[0] = 1;
    for (int i = 1; i <= lim; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= mod;
    }
}

ll ncr(ll n, ll r)
{
    ll ans = fact[n];
    ans *= mmi(fact[r]);
    ans %= mod;
    ans *= mmi(fact[n - r]);
    ans %= mod;
    return ans;
}

int main()
{

    // first run prec()
    // ncr(n,r) return ncr

    return 0;
}