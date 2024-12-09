// Date: 09-12-2024 at 08:53 BST
// Link: https://codeforces.com/problemset/problem/1993/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    cin >> n;
    vector<ll> ev, odd;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            ev.push_back(x);
        else
            odd.push_back(x);
    }
    if (ev.size() == 0 || odd.size() == 0)
    {
        cout << 0 << nl;
        return;
    }
    sort(odd.begin(), odd.end());
    sort(ev.begin(), ev.end());
    ll cnt = ev.size();
    ll Max = odd.back();
    for (auto x : ev)
    {
        if (x > Max)
        {
            cnt++;
            break;
        }
        Max += x;
    }
    cout << cnt << nl;
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