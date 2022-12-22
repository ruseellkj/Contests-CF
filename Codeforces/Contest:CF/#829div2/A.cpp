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

        int countq = 0;
        int counta = 0;
        if (s[s.size() - 1] == 'Q')
        {
            cout << "NO" << endl;
        }
        else
        {
            int flag = 0;
            for (int i = s.size()-1; i>=0; --i)
            {
                if (s[i] == 'Q')
                {
                    countq++;
                }
                else
                {
                    counta++;
                }

                if (countq > counta)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }

            if (!flag)
            {
                cout << "YES" << endl;
            }
        }
    }
}
