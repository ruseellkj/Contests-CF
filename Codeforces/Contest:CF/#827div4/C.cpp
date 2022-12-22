// C. stripes
// codeforces #827 div 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int ans = -1;
        string s[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < 8; i++)
        {
            int countr = 0;
            // int countb = 0;
            for (int j = 0; j < 8; j++)
            {
                if (s[i][j] == 'R')
                {
                    countr++;
                }
            }

            if (countr == 8)
            {
                ans = 'R';
                break;
            }
        }

        if (ans == 'R')
        {
            cout << "R" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
}
