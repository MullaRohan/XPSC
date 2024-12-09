// Date: 09-12-2024 at 21:37 BST
// Link:
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int Min = min(a[i], b[i]);
        int Max = max(a[i], b[i]);
        if (Max <= (2 * Min))
            cnt++;
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