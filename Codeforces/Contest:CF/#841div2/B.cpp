#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007



// // 2x2 
// // z z
// // z z 

//  3x3
//      1 2 3 
//    1 x x x
//    2 x x x
//    3 x x x

//    1x1+2x2+3x3 = 9+4 = 13 not maximum 
//    1x1+1x2+2x2+2x3+3x3 = 1+2+4+6+9 = 22
//    1x1+1x2+2x2+2x3+3x3+3x4+4x4 = 50
//    move in zig-zag manner to get maximum demodogs

ll mod_exp(ll a, ll b);

ll sum_of_sq(ll n)
{
    ll ans=(((n*(n+1))%mod)*(2*n+1)%mod)%mod;;
    ans=(ans*mod_exp(6, mod-2))%mod;
    
    return ans;
}
ll sum_of_Linearsq(ll n)
{
    ll ans=(n*(n+1))%mod;
    ans=(ans*mod_exp(2, mod-2))%mod;
    
    return ans;
}
ll mod_exp(ll a, ll b)
{
    ll ans=1;
    
    while(b>0){
        if((b%2)==1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    
    return ans;
}
int main()
{
    ll tt;
    ll n, ans;
    ll i;
    cin>>tt;

    while(tt--)
    {
        cin>>n;
        
        ans=0;
        
        ans=(ans+sum_of_sq(n))%mod;
        ans=(ans+sum_of_sq(n-1))%mod;
        ans=(ans+sum_of_Linearsq(n-1))%mod;
        ans=(ans*2022)%mod;
        
        cout<< ans << endl;
        
    }
    
}

