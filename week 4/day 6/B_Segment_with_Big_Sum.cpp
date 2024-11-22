// Date: 22-11-2024 at 12:09 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum - v[l] >= k)
        {
            sum -= v[l];
            l++;
        }
        if (sum >= k)
            ans = min(ans, r - l + 1);
        r++;
    }
    if (ans == INT_MAX)
        cout << -1 << nl;
    else
        cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}