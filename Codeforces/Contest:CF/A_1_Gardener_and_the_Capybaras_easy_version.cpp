#include <bits/stdc++.h>
#include <vector>
using namespace std;

// bbba --> b bb a
// abbb --> a bb b || ab b b
// abba --> a bb a || ab b a
// abb --> a b b
// bba --> abb --> a b b
// baa --> aab --> a a b
// a b b b
// Either 𝑎 <= 𝑏 and 𝑐 <= 𝑏, or 𝑏 <= 𝑎 and 𝑏 < =𝑐

// void solve()
// {
//     string s;
//     cin >> s;
//     int n = s.length();
//     if (s[0] == s[n - 1])
//     {
//         cout << s.substr(0, 1) << " " << s.substr(1, n - 2) << " " << s.substr(n - 1, 1) << " \n";
//         return;
//     }
//     else if (s[0] != s[n - 1])
//     {
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (s[i] == 'a')
//             {
//                 cout << s.substr(0, i) << " " << s.substr(i, 1) << " " << s.substr(i + 1, n - i - 1) << " \n";
//                 return;
//             }
//             else if (s[i] == 'b')
//             {
//                 cout << s.substr(0, 1) << " " << s.substr(i, n - i - 1) << " " << s.substr(n - 1, 1) << " \n";
//                 return;
//             }
//         }
//     }
//     cout << ":(" << endl;
// }

// int main(){
//     int tt;
//     cin >> tt;
//     for(int i=0; i<tt; i++){
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    ll t, n, i, j;
    string a, b, c, s;
    cin >> t;

    for (;t--;)
    {
        cin >> s;
        n = s.size();

        if (s[0] == s[n - 1])
        {
            a = s[0];
            c = s[n - 1];

            b = "";
            for (i = 1; i < n - 1; i++)
            {
                b += s[i];
            }

            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            if (s[0] == s[1])
            {
                a = s[0];
                b = s[1];
                c = "";
                for (i = 2; i < n; i++)
                {
                    c += s[i];
                }
            }
            else
            {
                if (s[0] == 'a')
                {
                    a = s[0];
                    c = s[n - 1];
                    b = "";
                    for (i = 1; i < n - 1; i++)
                    {
                        b += s[i];
                    }
                }
                else
                {
                    a = s[0];
                    b = s[1];
                    c = "";

                    for (i = 2; i < n; i++)
                    {
                        c += s[i];
                    }
                }
            }
            cout << a << " " << b << " " << c << "\n";
        }
    }
}