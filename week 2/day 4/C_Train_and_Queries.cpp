// Date: 07-11-2024 at 20:46 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n, q;
    cin >> n >> q;
    map<ll, vector<ll>> mp;
    // input number and their all address in set
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        mp[a].push_back(i);
    }
    // query start
    for (ll i = 1; i <= q; i++)
    {
        ll a, b;
        cin >> a >> b;
        // a idx strickly choto hobe b idx theke
        ll aIdx = -1, bIdx = -1;
        if (mp.count(a) == 0 || mp.count(b) == 0)
        {
            cout << "NO" << nl;
            continue;
        }
        aIdx = mp[a].front();
        bIdx = mp[b].back();
        if (aIdx < bIdx)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}