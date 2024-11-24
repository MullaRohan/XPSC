// Date: 24-11-2024 at 11:10 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    multiset<ll> ml;
    int r = 0, l = 0;
    ll ans = 0;
    while (r < n)
    {
        ml.insert(v[r]);
        while (l <= r)
        {
            ll mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k)
                break;
            ml.erase(ml.find(v[l++]));
        }
        if (*ml.rbegin() - *ml.rbegin() <= k)
            ans += (r - l + 1);
        r++;
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}