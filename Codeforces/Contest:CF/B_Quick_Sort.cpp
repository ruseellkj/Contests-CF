#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int tt;
    cin >> tt;
    while (tt--)
    {
        long long int n, k;
        cin >> n >> k;
        int arr[n];
        int c_arr = 0, ans;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // checking the longest sorted subsequence
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == c_arr + 1)
            {
                c_arr++;
            }
        }
        ans = n - c_arr;
        if (ans % k == 0)
        {
            cout << ans / k << endl;
        }
        else
        {
            cout << (ans / k) + 1 << endl;
        }
    }
    return 0;
}