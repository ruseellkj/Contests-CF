#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    
    while (tt--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // checking for the b number
        if ((a < b && b < c) || (c < b && b < a))
        {
             cout << b << endl;
        }
        // checking for a number
        else if ((b < a && a < c) || (c < a && c < b))
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}