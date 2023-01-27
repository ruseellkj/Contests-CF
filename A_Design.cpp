#include <bits/stdc++.h>
using namespace std;
#define ll long long

// basic maths thats it 
// practice more qs in order to get the ans ok!
int main(){
    ll n, w, m;
    int count =0;
    cin >> n >> w >> m;

    n = n-2*m;
    if(n >w){
        n= n-w;
        count++;
    }
    count+=floor(n/(m+w));
    cout << count << endl;


    

}