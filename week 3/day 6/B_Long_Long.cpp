// Date: 15-11-2024 at 11:16 BST
// Link: https://codeforces.com/problemset/problem/1843/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long sum = 0;
    int subArray = 0, track = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            track++;
        if (track > 0 && x > 0)
        {
            flag = false;
            subArray++;
            track = 0;
        }
        if (track > 0 && i == n - 1)
        {
            subArray++;
        }
        sum += abs(x);
    }
    cout << sum << " " << subArray << nl;
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