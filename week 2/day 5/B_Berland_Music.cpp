// Date: 08-11-2024 at 23:33 BST
// Link: https://codeforces.com/problemset/problem/1622/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    string st;
    cin >> st;
    vector<pair<int, int>> like, dislike;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '1')
        {
            // like
            like.push_back({v[i], i});
        }
        else
        {
            // dislike
            dislike.push_back({v[i], i});
        }
    }
    sort(like.begin(), like.end());
    sort(dislike.begin(), dislike.end());
    vector<int> ans(n);
    int rat = 1;
    for (auto [val, idx] : dislike)
    {
        ans[idx] = rat;
        rat++;
    }
    for (auto [val, idx] : like)
    {
        ans[idx] = rat;
        rat++;
    }
    for (auto x : ans)
        cout << x << " ";
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