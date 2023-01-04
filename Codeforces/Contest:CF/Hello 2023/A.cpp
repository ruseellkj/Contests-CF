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
        string s;
        cin >> s;
        int flag = 0;
        int index=0;
        // int len = s.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'R' && s[i + 1] == 'L')
            {
                flag = 1;
                break;
            }
            if (s[i] == 'L' && s[i+1] == 'R')
            {
                // flag = 2;
                index = i + 1;
                flag =2;
            }
        }

        if (flag == 1)
        {
            cout << 0 << endl;
        }
        else if(flag == 2)
        {
            cout << index << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        // cout << -1 << endl;
    }
    return 0;
}