/**
 *           author: aakash_172
 *           created: 2023-08-24    01:00:24
 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> nextg(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && nums[st.top()] <= nums[i])
        {
            st.pop();
        }
        if (!st.empty())
            ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int main()
{

    return 0;
}