// Date: 11-11-2024 at 17:26 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
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
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    ll x = 0, y = 0;
    ll ans = 0;
    while (x < n && y < m)
    {
        ll curr = a[x], count1 = 0, count2 = 0;
        while (x < n && a[x] == curr)
        {
            x++;
            count1++;
        }
        while (y < m && curr > b[y])
            y++;
        while (y < m && b[y] == curr)
        {
            y++;
            count2++;
        }
        ans += (count1 * count2);
    }
    cout << ans << nl;
    return 0;
}