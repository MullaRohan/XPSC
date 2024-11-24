// Date: 24-11-2024 at 11:59 BST
// Link: https://codeforces.com/problemset/problem/1692/E
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxlength = -1;
    int sum = 0;
    int left = 0, right = 0;
    while (right < n)
    {
        sum += v[right];
        while (sum > k)
        {
            sum -= v[left++];
        }
        if (sum == k)
        {
            maxlength = max(maxlength, right - left + 1);
        }
        right++;
    }
    if (maxlength == -1)
        cout << -1 << nl;
    else
        cout << n - maxlength << nl;
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