// Date: 08-11-2024 at 10:53 BST
// Link: https://codeforces.com/problemset/problem/1468/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int test, pos = 1;
    cin >> test;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for (int i = 0; i < test; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({pos, money});
            ml.insert({money, -pos});
            pos++;
        }
        else if (type == 2)
        {
            // monocarp turn // serial matter
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});
        }
        else
        {
            // polycarp turn // money matter
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, money});
        }
    }
    for (int x : ans)
        cout << x << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}