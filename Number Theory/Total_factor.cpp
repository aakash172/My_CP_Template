
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll maxRange = 1000008;
ll prime[maxRange + 2];
void sieve()
{
    for (ll i = 2; i <= maxRange; i++)
    {
        if (prime[i] == 0)
        {
            for (ll j = i; j <= maxRange; j += i)
            {
                if (prime[j] == 0)
                {
                    prime[j] = i;
                }
            }
        }
    }
}

ll calculateNoOfFactors(ll n)
{
    if (n == 1)
        return 1;

    ll ans = 1;

    ll dup = prime[n];

    ll c = 1;

    ll j = n / prime[n];

    while (j != 1)
    {

        if (prime[j] == dup)
        {
            c += 1;
        }
        else
        {
            dup = prime[j];
            ans = ans * (c + 1);
            c = 1;
        }

        j = j / prime[j];
    }

    ans = ans * (c + 1);

    return ans;
}

/*

map<ll, ll> mp;
ll calculateNoOfFactors(ll n)
{
    ll ans = 1;
    if (n == 1)
    {
        for (auto &x : mp)
        {
            ans *= (x.second + 1);
        }
        return ans;
    }

    while (n > 1)
    {
        mp[prime[n]]++;
        n /= prime[n];
    }

    for (auto &x : mp)
    {
        ans *= (x.second + 1);
    }

    return ans;
}


*/
int main()
{

    return 0;
}