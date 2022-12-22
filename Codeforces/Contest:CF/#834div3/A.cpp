#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         string s1 = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
//         string s;
//         cin >> s;

//         // using stl implementing the substring wala concept
//         if (s1.find(s) != string::npos)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }


// method-2
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s1 = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string s;
        cin >> s;

        int n = s1.size();
        int m = s.size();
        int flag = 0;

        for (int i = 0; i <= n - m; i++)
        {
            for (int j = i; j < i + m; j++)
            {
                flag = 1;
                if (s1[j] != s[j - i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
