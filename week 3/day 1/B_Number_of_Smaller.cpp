// Date: 10-11-2024 at 17:46 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int cnt = 0;
    int l = 0, r = 0;
    int tar = max(n, m) - 1;
    for (int r = 0; r < m; r++)
    {
        while (l < n && a[l] < b[r])
        {
            l++;
            cnt++;
        }
        cout << cnt << " ";
    }
    return 0;
}