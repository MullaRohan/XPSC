// Date: 12-11-2024 at 21:32 BST
// Link:https://codeforces.com/problemset/problem/1714/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v, v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        mp[v2[i]]++;
        if (mp[v2[i]] == 1)
        {
            v.push_back(v2[i]);
        }
        else
            break;
    }
    cout << n - v.size() << endl;
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