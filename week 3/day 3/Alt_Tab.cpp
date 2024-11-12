// Date: 12-11-2024 at 21:54 BST
// Link: https://www.codechef.com/problems/ALTTAB
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string> s, ans;
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        s.push_back(k);
    }
    map<string, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[s[i]]++;
        if (mp[s[i]] == 1)
        {
            cout << s[i][s[i].size() - 2];
            cout << s[i].back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}