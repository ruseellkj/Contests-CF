#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    string temp = "";
    int n = temp.size();
    int len = s.size();
    // itn one=0,two=0,three=0;

    for (int i = 0; i < len; i++)
    {
        // 1+1+1+2+3+1+3+2
        // 1 1 1 2 3 1 3 2
        temp += s[2 * i];
    }
    // cout << temp << endl;
    // 1 1 1 1 2 2 3 3
    sort(temp.begin(), temp.end());
    // cout << temp << endl;

    for (int i = 0; i < n-1; i++)
    {
        ans += temp[i] + "+";
        // cout << ans << endl;
    }
    cout << ans << endl;

    return 0;
}