// Date: 11-12-2024 at 10:20 BST
// Link: https://codeforces.com/problemset/problem/2003/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
        mp[it]++;
    vector<pair<int, char>> v;
    for (auto it : mp)
        v.push_back({it.second, it.first});
    sort(v.rbegin(), v.rend());
    string ans = "", tmp;
    for (auto it : v)
        tmp.push_back(it.second);
    int sum = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int need = v[i].first - sum;
        for (int i = 0; i < need; i++)
            ans += tmp;
        sum += need;
        tmp.pop_back();
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}