#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int minVal, maxVal, multiple;
    cin >> minVal >> maxVal >> multiple;
    int mul = 0;
    bool flag = false;
    for (int i = minVal; i <= maxVal; i++)
    {
        if (i % multiple == 0)
        {
            mul = i;
            flag = true;
            break;
        }
    }
    if (flag)
        cout << mul << nl;
    else
        cout << -1 << nl;
    return 0;
}