// Date: 12-11-2024 at 22:32 BST
// Link: https://www.codechef.com/problems/MOONSOON
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll gar, gze, ph;
    cin >> gar >> gze >> ph;
    vector<ll> gari(gar), garaze(gze);
    // gari input
    for (ll i = 0; i < gar; i++)
        cin >> gari[i];
    // garaze input
    for (ll i = 0; i < gze; i++)
        cin >> garaze[i];
    sort(gari.begin(), gari.end(), greater<ll>());
    sort(garaze.begin(), garaze.end(), greater<ll>());
    ll j = 0, k = 0;
    // j==gari     k==garaze
    ll ans = 0;
    while (j < gari.size() && k < gze)
    {
        ll canCharge = garaze[k++] * ph;
        // if (gari[j] > canCharge)
        // {
        //     ans += canCharge;
        // }
        // else
        // {
        //     ans += gari[j];
        // }
        ans += min(gari[j++], canCharge);
        // j++, k++;
    }
    cout << ans << nl;
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