#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "0" << endl;
        }
        else if(abs(a-b)>=x){
            cout << "1" << endl;
        }
        else if(abs(r-b)>=x && abs(a-r)>-x){
            cout << "2" << endl;
        }
        else if(abs(a-l)>=x && abs(l-b)>-x){
            cout << "2" << endl;
        }
        else if(abs(r-l)>-x){
            if(abs(a-r)>=x && abs(l-b)>=x){
                cout << "3" << endl;
            }
            else if(abs(a-l)>=x && abs(r-b)>=x){
                cout << "3" << endl;
            }
        }
        else{
            cout <<"-1" << endl;
        }
        
        

    }
}