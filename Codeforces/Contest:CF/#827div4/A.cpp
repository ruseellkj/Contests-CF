// D. coprime 
// codeforces #827 div 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // int sum = 0;
    // int a, b, c;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a+b==c || b+c==a || a+c==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" <<  endl;
        }
    }
    return 0;

}