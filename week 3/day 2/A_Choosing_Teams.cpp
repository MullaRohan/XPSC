// Date: 11-11-2024 at 12:15 BST
// Link: https://codeforces.com/problemset/problem/432/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= (5 - k))
            cnt++;
    }
    cout << cnt / 3 << nl;
    return 0;
}