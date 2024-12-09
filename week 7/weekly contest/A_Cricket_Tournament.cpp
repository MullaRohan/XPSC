// Date: 09-12-2024 at 21:02 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int a, b;
    cin >> a >> b;
    int match = 0;
    if (a < 2)
    {
        cout << "NO" << nl;
        return;
    }
    while (true)
    {
        int b = (a / 2);
        a = ceil(a * 1.00 / 2);
        if (b > 0)
            match += b;
        else
            break;
    }
    if (match >= b)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    // cout << match << nl;
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