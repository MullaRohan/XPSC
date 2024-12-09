// Date: 08-12-2024 at 09:00 BST
// Link: https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int n;
    bool flag = true;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < (1 << 8); i++)
    {
        int chk = 0;
        for (int j = 0; j < n; j++)
        {
            chk = chk ^ (v[j] ^ i);
        }
        if (chk == 0)
        {
            cout << i << nl;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << -1 << nl;
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