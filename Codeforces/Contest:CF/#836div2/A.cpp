#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;

    while(tt--){
        string s;
        cin >> s;
        string s1 = s;
        reverse(s1.begin(),s1.end());
        s = s+s1;
        cout << s << endl;

    }
}