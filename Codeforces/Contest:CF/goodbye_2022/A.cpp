#include <bits/stdc++.h>
using namespace std;
#define ll long long

void mergeArrays(ll a[], ll b[], ll n, ll m, ll c[])
{
    int i = 0, j = 0, k = 0;
    // traverse the arr1 and insert its element in arr3
    while (i < n)
    {
        c[k++] = a[i++];
    }

    // now traverse arr2 and insert in arr3
    while (j < m)
    {
        c[k++] = b[j++];
    }

    // sort the whole array arr3
    sort(c, c + n + m - 1);
}

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        // int i, j, k;
        ll n, m;
        cin >> n >> m;
        ll a[n];
        ll b[m];
        ll c[n + m];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            // c[i] = a[i];
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        mergeArrays(a, b, n, m, c);
        // for (int i = 0; i < n + m; i++)
        // {
        //     cout << c[i] << " ";
        // }
        // cout << c[i] << " ";
        // cout << endl;

        ll sum = 0;
        for (int i = m; i < n + m; i++)
        {
            sum += c[i];
        }
        cout << sum << endl;

    }
    return 0;
}

// using min-heap
// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n, m;
//         cin >> n >> m;
//         ll sum = 0;
//         // max-heap
//         // priority_queue<int> pq;

//         // min-heap
//         priority_queue<int, vector<int>, greater<int>> pq;

//         // making bucket of all elements
//         for (int i = 0; i < n; i++)
//         {
//             int temp;
//             cin >> temp;
//             pq.push(temp);
//         }

//         for (int i = 0; i < m; i++)
//         {
//             int temp;
//             cin >> temp;
//             pq.pop();
//             pq.push(temp);
//         }

//         while (!pq.empty())
//         {
//             sum += pq.top();
//             pq.pop();
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }