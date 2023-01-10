// 6 7
// 1 5 9 10 13 18 //h
// h : [11,0,6,2,3,0]
// 0 0 2 3 6 11
// 2 7 2 1 2 6//p
// 1 2 2 2 6 7

// 3 4
// 5 5 5
// 4 4 4

// 3 2
// 1 2 3
// 1 1 1

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, k, i, j, f, sum, h1, p1, n1, i1;
    cin >> t;

    for (; t--;)
    {
        cin >> n >> k;

        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> h, p;
        bool v[n];

        for (i = 0; i < n; i++)
        {
            v[i] = false;
        }

        f = 0;

        sum = 0;

        for (i = 0; i < n; i++)
        {
            cin >> j;
            h.push({j, i});
        }

        for (i = 0; i < n; i++)
        {
            cin >> j;
            p.push({j, i});
        }
        n1 = 0;

        for (; k > 0 && n1 < n;)
        {
            sum = sum + k;

            while (h.empty() == false)
            {

                h1 = h.top().first;
                i1 = h.top().second;
                h1 = h1 - sum;

                if (h1 <= 0)
                {
                    v[i1] = true;
                    h.pop();
                    n1++;
                }
                else
                {
                    break;
                }
            }

            while (p.empty() == false && v[p.top().second] == true)
            {
                p.pop();
            }

            if (p.empty() == false)
            {
                p1 = p.top().first;
                k = k - p1;
            }
        }

        if (n1 == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
