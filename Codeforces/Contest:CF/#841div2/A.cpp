#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// 3
// 2 3 2
// 
// 3 = a[i]
// 2 = a[j]

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         int n;
//         cin >> n;
//         long int a[n];
//         for (int i = 1; i <= n - 1; i++)
//         {
//             cin >> a[i];
//         }

//         // // logic implementing
//         sort(a, a + n);
//         int s;
//         int r;
//         r = *max_element(a, a + n);
//         for (int i = n - 2; i >= 1; i--)
//         {
//             if (a[i] != a[n - 1])
//             {
//                 s = a[i];
//             }
//             else if (a[i] == a[n - 1])
//             {
//                 s = a[i];
//             }

//             int z = r * s;
//             int x = z;
//             int y = 1;

//             r = x;
//             s = y;
//         }

//         int sum =0;
//         for(int i=1; i<n-1; i++){
//             sum+=a[i];
//         }

//         cout << sum * 2022 << endl;
//     }
// }


int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n];
        long long ans = 1;
        for(int i=0; i<n; i++){
            cin >> a[i];
            ans*=a[i];
        }
        ans+=n-1;
        cout << ans * 2022 << endl;
    }
}