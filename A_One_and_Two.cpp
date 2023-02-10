#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >>n;
        int count=0;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i] == 2){
                // tc= 2 2 1 2 1 2 
                // ct = 4
                count++;
            }
        }
        if(count%2 == 1){
            cout << -1 << endl;
        }
        else if(count == 0){
            cout << 1 << endl;
        }
        else if(count%2 == 0){
            int k = count/2;
            // new counter
            int _=0;
            int s;
            for(int i=0; i<n; i++){
                if(arr[i] == 2){
                    _++;
                    if(_ == k){
                        s = i+1;
                        break;
                    }

                }
            }
            cout << s << endl;
        }

        // count = count/2;

    }

    return 0;
}