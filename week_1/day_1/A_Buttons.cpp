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
    if (num1 == num2)
        cout << num1 + num2 << nl;
    else
    {
        int maxVal = max(num1, num2);
        cout << maxVal + maxVal - 1 << nl;
    }
    return 0;
}