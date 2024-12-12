// Date: 12-12-2024 at 20:52 BST
// Link: https://codeforces.com/problemset/problem/1665/B
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
    vector<ll> v(n);
    map<ll, ll> mp;
    ll max_occur = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        max_occur = max(max_occur, mp[v[i]]);
    }
    int need = n - max_occur;
    while (max_occur < n)
    {
        need++;
        max_occur *= 2;
    }
    cout << need << nl;
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