#include <bits/stdc++.h>
using namespace std;

int main(){
    // sum of all original dice = s 
    // sum of alter dice with max no missing = r
    int tt;
    cin >> tt;
    while(tt--){
        int n ,s ,r;
        cin >> n >> s >> r;
        int last_element = s-r;
        // vec.push_back(ls);
        vector<int> vec(n-1);
        vec.push_back(last_element);
        for(int i =0; i<n-1; i++){

            // 4 9 5
            // _ _ _ _4 = 9
            // _ _ _   = 5


            // 5 17 11
            // _ _ _ _ _6 = 17
            // _ _ _ _ = 11

            // 1<11;
            // 1+6
            // 2<11
            // 1+2+6
            // 3<6
            // 1+2+3+6
            // 4<6
            // 1+2+3+5+6 = 17

            // 5 20 15
            // _ _ _ _ _5 = 20
            // _ _ _ _ = 15

            // 1<15
            // 1+5
            // 2<15
            // 1+2+5
            // 3<15
            // 1+2+3+5
            // 4<15
            // 1+4+5+5+5 = 17
            // starting number be 1
            vec[i] =1 ;
            r= r-1;
        }

        int i=0;
        while(r!=0){
            if(vec[i]<last_element){
                vec[i]++;
                r--;
            }
            else{
                i++;
            }
        }

        // sort(vec.begin(),vec.end());
        for(int i =0; i<vec.size(); i++){
            cout << vec[i] << " ";
        }
        cout << endl;


    } 
}