#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> v(4, '0');
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int i = 3;
    for (char x : s)
    {
        v[i] = x;
        i--;
    }
    for (char x : v)
        cout << x;
    return 0;
}