// Date: 10-11-2024 at 11:50 BST
// Link: https://www.codechef.com/problems/MNR
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    // delete 1st min and 2nd min
    ll combi1 = v[n - 1] - v[2];
    // delete 1st mind and last max
    ll combi2 = v[n - 2] - v[1];
    // delete last max, last 2nd max
    ll combi3 = v[n - 3] - v[0];

    ll ans = min({combi1, combi2, combi3});
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