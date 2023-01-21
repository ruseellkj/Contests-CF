#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum =0, mn;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            sum = sum +1;
            mn = min(mn,sum);
        }
    }
      cout << mn+1 << endl;
}