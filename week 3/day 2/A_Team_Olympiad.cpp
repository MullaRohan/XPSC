// Date: 11-11-2024 at 12:34 BST
// Link: https://codeforces.com/problemset/problem/490/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, set<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        mp[val].insert(i);
    }
    int mxSize = min({mp[1].size(), mp[2].size(), mp[3].size()});
    cout << mxSize << nl;
    for (int i = 1; i <= mxSize; i++)
    {
        cout << *mp[1].begin() << " ";
        mp[1].erase(mp[1].begin());
        cout << *mp[2].begin() << " ";
        mp[2].erase(mp[2].begin());
        cout << *mp[3].begin() << " ";
        mp[3].erase(mp[3].begin());
        cout << nl;
    }
    return 0;
}