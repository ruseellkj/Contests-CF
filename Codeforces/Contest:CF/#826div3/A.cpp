#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a;
    string b;
    while (t--)
    {
        cin >> a;
        cin >> b;
        if (a[a.size() - 1] == 'M' || b[b.size() - 1] == 'M')
        {
            if (a[a.size() - 1] == 'L')
            {
                cout << ">" << endl;
            }
            else if (a[a.size() - 1] == 'L' || b[b.size() - 1] == 'S')
            {
                cout << ">" << endl;
            }
            else if (b[b.size() - 1] == 'L')
            {
                cout << "<" << endl;
            }
            else if (b[b.size() - 1] == 'S')
            {
                cout << ">" << endl;
            }
            else if (a[a.size() - 1] == 'S')
            {
                cout << "<" << endl;
            }
            else if (a[a.size() - 1] == 'S' || b[b.size() - 1] == 'L')
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }

        // comparing what if the case is like this :
        // XXXXS     XXXXXXL
        // XXXS      XXXXXXXXXXL

        else
        {
            if (a[a.size() - 1] == 'S')
            {
                if (b[b.size() - 1] == 'S')
                {
                    if (a.size() == b.size())
                    {
                        cout << "=" << endl;
                    }
                    else if (a.size() > b.size())
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (b[b.size() - 1] == 'S')
                {
                    cout << ">" << endl;
                }
                else
                {
                    if (a.size() == b.size())
                    {
                        cout << "=" << endl;
                    }
                    else if (a.size() > b.size())
                    {
                        cout << ">" << endl;
                    }
                    else
                    {
                        cout << "<" << endl;
                    }
                }
            }
        }
    }
}
