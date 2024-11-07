// Date: 07-11-2024
// https://codeforces.com/problemset/problem/1506/D
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;
    for (auto [x, y] : mp)
        pq.push(y);
    while (!pq.empty())
    {
        if (pq.size() < 2)
            break;
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        x--, y--;
        if (x > 0)
            pq.push(x);
        if (y > 0)
            pq.push(y);
    }
    int cnt = 0;
    while (!pq.empty())
    {
        cnt += pq.top();
        pq.pop();
    }
    cout << cnt << '\n';
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