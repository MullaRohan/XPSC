#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num1, num2;
    cin >> num1 >> num2;
    if (num1 >= num2)
    {
        cout << 0 << nl;
        return 0;
    }
    cout << num2 - num1 + 1;
    return 0;
}