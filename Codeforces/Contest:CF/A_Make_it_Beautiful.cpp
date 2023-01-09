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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // sorting the array
        sort(a, a + n);
        // reversing the array
        reverse(a, a + n);

        // checking the case for 10 10
        if (a[0] == a[n - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int j = 1; j < n; j++)
            {
                if (a[j] != a[0])
                {
                    swap(a[j], a[1]);
                    break;
                }
            }
            cout << "YES" << endl;
            for (int j = 0; j < n; j++)
                cout << a[j] << " ";
            cout << endl;
        }
    }
}

// 3 3 6 6
// sort and reverse
// n = 4
// 0 1 2 3
// 6 6 3 3
// 6 3 6 3
// if a[0] == a[n-1]
// 6 != 3
// NO

// 1 2 3 4 5
// 5 4 3 2 1
// 5 2 4 3 1

// 0 1 2 3 4

// a[0] == a[n-1]
// NO

// n = 3
// 1 4 4
// sort
// 4 1 4
// 0 1 2

// 1 4 3 2 5
// 1 2 3 4 5
// 5 4 3 2 1

// 1 4 4
// 4 4 1
