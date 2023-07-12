/**
 *           author: aakash_172
 *           created: 2023-07-13    01:55:16
 **/
#include <bits/stdc++.h>
using namespace std;

class Dset
{
    int *rank, *parent, n;

public:
    Dset(int n)
    {
        rank = new int[n + 1];
        parent = new int[n + 1];
        this->n = n;
        makeDSet();
    }

    void makeDSet()
    {
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }

        return parent[x];
    }

    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
        if (xset == yset)
            return;
        if (rank[xset] < rank[yset])
        {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset])
        {
            parent[yset] = xset;
        }
        else
        {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};

int main()
{
    //    int n;
    //    Dset obj(n);   -->Declaration
    //    obj.Union(node1,node2); -->Union
    //    obj.find(node);   -->Find parent
    return 0;
}