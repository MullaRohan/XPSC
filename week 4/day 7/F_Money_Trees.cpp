// Date: 24-11-2024 at 13:00 BST
// Link: https://codeforces.com/problemset/problem/1873/F
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
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ans = 0, left = 0, right = 0;
    ll sum = 0;
    // b.push_back(b.back());
    while (right < n)
    {
        if (right && b[right - 1] % b[right] != 0)
        {
            // cout << "Break at " << a[right] << " " << ans << nl;
            sum = 0;
            left = right;
            // continue;
        }
        sum += a[right];
        // cout << a[left] << "+" << a[right] << "->" << sum << nl;
        while (sum > k)
        {
            sum -= a[left++];
            // cout << "removed ->" << a[left - 1] << " " << sum << nl;
        }
        ans = max(ans, right - left + 1);
        // cout << "sub array size->" << ans << nl;
        right++;
    }
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