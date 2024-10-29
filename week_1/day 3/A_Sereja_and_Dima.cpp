// https://codeforces.com/contest/381/problem/A

// #include <bits/stdc++.h>
// #define null nullptr
// #define ll long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     int i = 0, j = n - 1;
//     int sereja = 0, dima = 0;
//     bool sej = true, dim = true;
//     while (i <= j)
//     {
//         if (sej)
//         {
//             // sereja turn
//             if (v[i] > v[j])
//             {
//                 sereja += v[i];
//                 i++;
//             }
//             else
//             {
//                 sereja += v[j];
//                 j--;
//             }
//             dim = true;
//             sej = false;
//         }
//         else
//         {
//             // dima turn
//             if (v[i] > v[j])
//             {
//                 dima += v[i];
//                 i++;
//             }
//             else
//             {
//                 dima += v[j];
//                 j--;
//             }
//             dim = false;
//             sej = true;
//         }
//         // cout << sereja << " " << dima << nl;
//     }
//     cout << sereja << " " << dima << nl;

//     return 0;
// }

// another way
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sereja = 0, dima = 0;
    int i = 0, j = n - 1;
    bool serejaTurn = true;
    while (i <= j)
    {
        int maxVal;
        if (v[i] > v[j])
        {
            maxVal = v[i];
            i++;
        }
        else
        {
            maxVal = v[j];
            j--;
        }
        if (serejaTurn)
            sereja += maxVal;
        else
            dima += maxVal;
        serejaTurn = !serejaTurn;
    }
    cout << sereja << " " << dima << nl;
    return 0;
}