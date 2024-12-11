// Date: 11-12-2024 at 11:43 BST
// Link: https://codeforces.com/problemset/problem/1738/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];
    if (k == 1)
    {
        cout << "YES" << nl;
        return;
    }
    vector<ll> ans(n);
    int j = n - 1;
    for (int i = k - 1; i >= 1; i--)
        ans[j--] = v[i] - v[i - 1];
    while (j >= 0)
    {
        ans[j] = ans[j + 1];
        v[0] -= ans[j--];
    }
    ans[0] += v[0];
    if (is_sorted(ans.begin(), ans.end()))
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
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