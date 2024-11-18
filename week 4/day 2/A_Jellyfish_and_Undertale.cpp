// Date: 18-11-2024 at 13:46 BST
// Link: https://codeforces.com/problemset/problem/1875/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> v(c);
    ll ans = 0;
    for (int i = 0; i < c; i++)
    {
        cin >> v[i];
        ans += min(a - 1, v[i]);
    }
    cout << (ans + b) << nl;
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