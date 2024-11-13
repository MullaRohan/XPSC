// Date: 13-11-2024 at 20:26 BST
// Link: https://codeforces.com/contest/1472/problem/D
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll alice = 0, bob = 0;
    sort(v.begin(), v.end(), greater<int>());
    bool aliceturn = true;
    for (int i = 0; i < n; i++)
    {
        if (aliceturn)
        {
            if (v[i] % 2 == 0)
                alice += v[i];
            aliceturn = false;
        }
        else
        {
            if (v[i] % 2 == 1)
                bob += v[i];
            aliceturn = true;
        }
    }
    if (alice > bob)
        cout << "Alice" << nl;
    else if (bob > alice)
        cout << "Bob" << nl;
    else
        cout << "Tie" << nl;
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