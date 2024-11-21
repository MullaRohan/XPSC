// Date: 21-11-2024 at 21:51 BST
// Link: https://codeforces.com/problemset/problem/1729/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    string s, sk;
    cin >> s;
    // mp er moddhe character er array position ache
    map<char, queue<int>> mp, np;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]].push(i + 1);
    char fst = s[0], lst = s[s.size() - 1];
    bool flag = false;
    if (fst > lst)
    {
        swap(fst, lst);
        flag = true;
    }
    char chk = fst;
    sort(s.begin(), s.end());
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= fst && s[i] <= lst))
        {
            sk.push_back(s[i]);
            int prev_weight = chk - 'a' + 1;
            int curr_weight = s[i] - 'a' + 1;
            ans += abs(curr_weight - prev_weight);
            chk = s[i];
        }
    }
    cout << ans << " " << sk.size() << nl;
    if (flag)
        reverse(sk.begin(), sk.end());
    for (auto x : sk)
    {
        cout << mp[x].front() << " ";
        mp[x].pop();
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