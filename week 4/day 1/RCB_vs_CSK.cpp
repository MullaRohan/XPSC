// Date: 16-11-2024 at 23:29 BST
// Link: https://www.codechef.com/problems/RCBCSK
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if ((a - b) >= 18)
        cout << "RCB" << nl;
    else
        cout << "CSK" << nl;
    return 0;
}