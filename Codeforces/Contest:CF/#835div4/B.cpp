#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        // char max = 'a';
        int ans =0;
        for(int i=0; i<n; i++){
            ans = max(ans,int(s[i]-'a'));
        }

        cout << ans+1 << endl;
    }
}