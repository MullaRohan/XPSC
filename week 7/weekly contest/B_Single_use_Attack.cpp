// Date: 09-12-2024 at 21:23 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int boss, chef, special, cnt = 0;
    cin >> boss >> chef >> special;
    boss -= special;
    cnt++;
    if (boss <= 0)
    {
        cout << cnt << nl;
        return;
    }
    while (boss > 0)
    {
        boss -= chef;
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