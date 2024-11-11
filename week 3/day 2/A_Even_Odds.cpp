// Date: 11-11-2024 at 12:57 BST
// Link: https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    ll diff = ((n + 1) / 2);
    if (k > diff)
    {
        // even
        ll pos = k - diff;
        ll ans = 2 + ((pos - 1) * 2);
        cout << ans << nl;
    }
    else
    {
        cout << 1 + ((k - 1) * 2) << nl;
    }
    return 0;
}