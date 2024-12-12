// Date: 12-12-2024 at 20:11 BST
// Link: https://codeforces.com/problemset/problem/2013/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll sum = accumulate(v.begin(), v.end() - 2, 0LL);
    ll ans = v[n - 2] - sum;
    ans = v[n - 1] - ans;
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