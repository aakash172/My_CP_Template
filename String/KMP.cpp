/**
 *           author: aakash_172
 *           created: 2023-08-06    04:06:01
 **/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> KMP(string s)
{
    int n = s.size(), len = 0, i = 1;
    vector<int> lps(n, 0);
    while (i < n)
    {
        if (s[i] == s[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len > 0)
                len = lps[len - 1];
            else
                i++;
        }
    }

    return lps;
}

int main()
{

    return 0;
}