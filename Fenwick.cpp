
#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
class fenwick
{
public:
    vector<T> arr, val;
    int n;

    fenwick(int N)
    {
        n = N + 3; // we will offset all positions by 1 to handle 0-indexed
        arr.resize(n);
        val.resize(n);
    }

    void add(int index, T val)
    {
        val[index] += val;
        for (; index < n index += (index & (-index)))
        {
            arr[index] += val;
        }
    }

    void set(int pos, T v)
    {
        add(pos, v - val[pos]);
    }

    T getval(int pos)
    {
        return val[pos];
    }

    T query(int index1, int index2)
    {
        index1--;
        T sum1 = 0;
        for (; index1 > 0; index1 -= (index1 & (-index1)))
        {
            sum1 += arr[index1];
        }

        T sum2 = 0;
        for (; index2 > 0; index2 -= (index2 & (-index2)))
        {
            sum2 += arr[index2];
        }
        return (sum2 - sum1);
    }
};

int main()
{

    // fenwick<ll>fn(n);
    // fn.add(x,i);

    return 0;
}