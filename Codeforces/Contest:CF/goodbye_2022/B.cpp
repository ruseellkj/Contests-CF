#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    
    ll tt;
    ll n, k, i, j;
    cin >> tt;

    for (;tt--;) // or while(tt--)
    {
        cin >> n >> k;

        i = n;
        j = 1;

        while (i >= j)
        {
            cout << i << " ";
            i--;

            if (i >= j)
            {
                cout << j << " ";
                j++;
            }
        }
        cout << "\n";
    }
}