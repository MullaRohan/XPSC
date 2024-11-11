// Date: 10-11-2024 at 21:50 BST
// Link: https://codeforces.com/problemset/problem/1676/D
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int ar[200][200];
int n, m;
set<ll> ans;
void check(int x, int y)
{
    ll ans1 = 0;
    ans1 += ar[x][y];
    // left up
    int a = x - 1, b = y - 1;
    while (a >= 0 && b >= 0)
    {
        ans1 += ar[a][b];
        a--, b--;
    }
    // left down
    a = x + 1, b = y - 1;
    while (a < n && b >= 0)
    {
        ans1 += ar[a][b];
        a++, b--;
    }

    // right up
    a = x - 1, b = y + 1;
    while (a >= 0 && b < m)
    {
        ans1 += ar[a][b];
        a--, b++;
    }

    // right down
    a = x + 1, b = y + 1;
    while (a < n && b < m)
    {
        ans1 += ar[a][b];
        a++, b++;
    }
    ans.insert(ans1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        n = 0, m = 0;
        memset(ar, 0, sizeof(ar));
        ans.clear();
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                check(i, j);
            }
        }
        // check(3, 3);
        if (!ans.empty())
            cout << *ans.rbegin() << nl;
    }
    return 0;
}