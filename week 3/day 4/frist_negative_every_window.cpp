// Date: 13-11-2024 at 10:45 BST
// Link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    int l = 0, r = 0;
    queue<int> q;
    while (r < n)
    {
        if (v[r] < 0)
            q.push(v[r]);
        if (r - l + 1 == k)
        {
            if (!q.empty())
            {
                ans.push_back(q.front());
                if (v[l] == q.front())
                    q.pop();
            }
            else
                ans.push_back(0);
            l++;
        }
        r++;
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