// D. coprime 
// codeforces #827 div 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        long long i, j, ans = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // sort(a,a+n);
        }
        sort(a, a + n);

        for (i = 0, j = 1; i < n, j < n; i++, j++)
        {
            if (a[i] == a[j])
            {
                ans = 1;
                break;
            }
            else
            {
                ans = 0;
            }
        }

        if(ans ==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}