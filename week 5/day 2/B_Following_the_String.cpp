// Date: 26-11-2024 at 15:00 BST
// Link: https://codeforces.com/problemset/problem/1927/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, queue<char>> mp;
    char x = 'a';
    for (int i = 0; i < n; i++)
    {
        int ch;
        cin >> ch;
        if (ch == 0)
        {
            cout << x;
            mp[1].push(x);
            x++;
        }
        else
        {
            cout << mp[ch].front();
            mp[ch + 1].push(mp[ch].front());
            mp[ch].pop();
        }
    }
    cout << nl;
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