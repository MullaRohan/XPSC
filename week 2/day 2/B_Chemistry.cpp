// https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (char x : s)
        mp[x]++;
    int sum = 0;
    for (auto [x, y] : mp)
        if (y % 2 != 0)
            sum++;
    if (sum - 1 < 0)
        sum = 0;
    else
        sum = sum - 1;
    cout << ((sum <= k && k <= n) ? "YES" : "NO") << nl;
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