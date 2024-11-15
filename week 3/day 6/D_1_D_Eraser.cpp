// Date: 15-11-2024 at 09:22 BST
// Link: https://codeforces.com/contest/1873/problem/D
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 0, r = 0;
    vector<int> ans;
    int sum = 0;
    while (r < n)
    {
        if (s[r] == 'B')
        {
            r += k - 1;
            sum++;
        }
        r++;
    }
    cout << sum << nl;
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