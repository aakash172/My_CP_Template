/**
 *           author: aakash_172
 *           created: 2023-07-15    21:04:08
 **/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Trie
{
public:
    Trie *child[26];
    bool end;
    Trie()
    {
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
        end = false;
    }

//This function return true is s is already present and it insert s in trie
    bool insert(string &s, Trie *&root)
    {
        Trie *temp = root;

        for (auto x : s)
        {
            int in = x - 'a';
            if (temp->child[in] == NULL)
            {
                temp->child[in] = new Trie();
            }
            temp = temp->child[in];
        }
        bool ans = temp->end;

        temp->end = true;


        return ans;
    }
};

int main()
{

        // Trie *obj=new Trie();  
        // obj->insert(s,obj)
    return 0;
}