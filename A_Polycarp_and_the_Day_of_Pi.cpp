#include <bits/stdc++.h>
using namespace std;
// #define pi 3141592653589793238462643383279
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int count=0;
        // 314159265358
        string pi = "3141592653589793238462643383279";
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == pi[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
        
    }
}