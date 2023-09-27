/**
 *           author: aakash_172
 *           created: 2023-07-13    02:00:04
 **/
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

int main()
{

    return 0;
}