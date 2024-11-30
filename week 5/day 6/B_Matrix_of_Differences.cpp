// Date: 30-11-2024 at 11:02 BST
// Link: https://codeforces.com/problemset/problem/1783/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int i = 1, j = n * n;
    while (i <= j)
    {
        if (i != j)
        {
            v.push_back(i++);
            v.push_back(j--);
        }
        else
            v.push_back(i++);
    }
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = x; j < x + n; j++)
                cout << v[j] << " ";
            cout << nl;
            x += n;
        }
        else
        {
            for (int j = (n + x) - 1; j >= x; j--)
                cout << v[j] << " ";
            cout << nl;
            x += n;
        }
    }
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