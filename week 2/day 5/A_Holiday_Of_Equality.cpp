// Date: 08-11-2024 at 11:08 BST
// Link: https://codeforces.com/problemset/problem/758/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, Max = -1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        (v[i] > Max) ? Max = v[i] : Max = Max;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += Max - v[i];
    cout << ans;
    return 0;
}