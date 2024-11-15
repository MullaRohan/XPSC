// Date: 15-11-2024 at 10:52 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m), ans;
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];
    int ar = 0, br = 0;
    v1.push_back(INT_MAX);
    v2.push_back(INT_MAX);
    int i = 0;
    while (ar < n || br < m)
    {
        if (v1[ar] < v2[br])
            ans.push_back(v1[ar++]);
        else
            ans.push_back(v2[br++]);
    }
    for (auto x : ans)
        cout << x << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}