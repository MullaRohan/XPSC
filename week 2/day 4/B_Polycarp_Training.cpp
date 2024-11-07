// Date: 07-11-2024
// https://codeforces.com/problemset/problem/1165/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ml.insert(v[i]);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        auto it = ml.lower_bound(i);
        // cout << i << " " << *it << nl;
        if (it != ml.end())
        {
            cnt++;
            ml.erase(it);
        }
    }
    cout << cnt << nl;
    return 0;
}