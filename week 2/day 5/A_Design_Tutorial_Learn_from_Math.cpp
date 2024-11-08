// Date: 08-11-2024 at 11:18 BST
// Link: https://codeforces.com/problemset/problem/472/A
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

    if (n % 2 == 0)
        cout << 4 << " " << n - 4 << nl;
    else
    {
        cout << 9 << " " << n - 9 << nl;
    }
    return 0;
}