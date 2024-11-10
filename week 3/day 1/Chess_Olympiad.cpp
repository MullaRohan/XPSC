// Date: 10-11-2024 at 11:39 BST
// Link: https://www.codechef.com/problems/CHOLY?tab=Help
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    double t1 = x + 0.5 * y + 4 - (x + y + z);
    double t2 = 0.5 * y + z;

    if (t1 > t2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}