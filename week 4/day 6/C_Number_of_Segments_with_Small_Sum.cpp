// Date: 22-11-2024 at 18:29 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
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
    int l = 0;
    ll sum = 0, ans = 0;
    for (int r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum - v[l] > k && l <= r)
            sum -= v[l++];
        ans += (r - l + 1);
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