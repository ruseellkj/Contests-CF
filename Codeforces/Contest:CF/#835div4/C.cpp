#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int arr[n];

        // taking in the array (strengths of participant)
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // barr[i];
        }

        // for(int i=0; i<n; i++){
        //     brr[i] = arr[i];
        // }
        

        // sort(brr,brr+n);
        // finding the maximum element in the array
        int max = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        // sort(arr, arr + n);

        int second_max= 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] != arr[n - 1])
            {
                second_max = arr[i];
                
            }
        }

        // printing the output
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                cout << max - second_max << " ";
            }
            else
            {
                cout << arr[i] - max << " ";
            }
        }
        cout << endl;
    }
}