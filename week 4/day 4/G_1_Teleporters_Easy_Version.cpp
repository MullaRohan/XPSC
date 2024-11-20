// Date: 20-11-2024 at 11:37 BST
// Link: https://codeforces.com/problemset/problem/1791/G1
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> ar(a), br(a);
    for (ll i = 0; i < a; i++)
    {
        cin >> ar[i];
        br[i] = i + 1 + ar[i];
    }
    sort(br.begin(), br.end());
    int ans = 0;
    ll sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += br[i];
        if (sum > b)
            break;
        ans++;
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