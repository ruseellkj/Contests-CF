#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    map<int,int>m;
    vector <int> v;
    for(int i =0; i<N; i++)
    {
        int K;
        cin >> K;
        for(int j=0; j<K; j++)
        {
            int T;
            cin >> T;
            m[T]++;

        }
    }
    
    int cnt=0;
    for(auto &it:m)
    {
       if(N==it.second)
       {
        cnt++;
       }
    }
    cout << cnt;
    return 0;
}
