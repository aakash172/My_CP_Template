/**
 *           author: aakash_172
 *           created: 2023-08-07    01:22:22
 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> rabin_karp(string &t, ll p, ll m)
{

    int T = t.size();
    vector<ll> p_pow(T);
    p_pow[0] = 1;
    for (int i = 1; i < (int)p_pow.size(); i++)
    {
        p_pow[i] = (p_pow[i - 1] * p) % m;
    }

    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; i++)
    {
        h[i + 1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m;
    }

    return h;
}

int main()
{

    return 0;
}