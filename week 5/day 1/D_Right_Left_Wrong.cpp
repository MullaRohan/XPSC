// Date: 25-11-2024 at 10:49 BST
// Link: https://codeforces.com/contest/2000/problem/D
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n, sum = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    string s;
    cin >> s;

    ll ans = 0, l = 0, r = n - 1;
    bool flag = true;
    while (l <= r)
    {
        if (s[l] == 'R')
            sum -= v[l++];
        else if (s[r] == 'L')
            sum -= v[r--];
        else
        {
            ans += sum;
            sum -= v[l++];
            sum -= v[r--];
        }
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