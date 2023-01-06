#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int min_ele = *min_element(arr,arr+n);
        int max_ele = *max_element(arr,arr+n);

        if(arr[0] == min_ele || arr[0] == max_ele){
            cout << n-(k+1) << endl;
        }
        else{
            cout << n-arr[0] << endl;
        }
    }
    return 0;
}