// Date: 25-11-2024 at 22:00 BST
// Link:
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string lock, key;
    cin >> lock >> key;
    if (lock.find(key) != string::npos)
    {
        cout << 0 << nl;
        return;
    }
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