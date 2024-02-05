
#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int> manacher(string t) {
    string s = "";
    for (auto& c : t) {
        s.push_back('#');
        s.push_back(c);
    }
    s.push_back('#');

    int n = s.size();
    s = "$" + s + "^";
    vector<int> d(n + 2);
    int l = 0, r = -1;
    for (int i = 1; i <= n; i++) {
        d[i] = max(0, min(r - i, d[l + (r - i)]));
        while (s[i - d[i]] == s[i + d[i]]) {
            d[i]++;
        }
        if (i + d[i] > r) {
            l = i - d[i], r = i + d[i];
        }
    }
    for (auto& x : d) {
        x--;
    }
    return vector<int>(begin(d) + 2, end(d) - 2);
}



int main() {

    return 0;
}