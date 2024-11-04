// https://atcoder.jp/contests/abc191/submissions/me

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x != m)
            v.push_back(x);
    }
    for (auto x : v)
        cout << x << " ";
    return 0;
}