/**
 *           author: aakash_172
 *           created: 2023-08-07    00:06:39
 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> z_function(string s)
{
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
        if (i < r)
        {
            z[i] = min(r - i, z[i - l]);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }
        if (i + z[i] > r)
        {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

int main()
{

    return 0;
}