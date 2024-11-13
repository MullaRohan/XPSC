// Date: 13-11-2024 at 10:19 BST
// Link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
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
    int k;
    cin >> k;
    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while (r < v.size())
    {
        sum += v[r];
        if (r - l + 1 == k)
        {
            ans = max(ans, sum);
            sum -= v[l++];
        }
        r++;
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