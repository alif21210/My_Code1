#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,i;
        cin>>n;
        int arr[n];

        for(i=0; i<n-1; i++)
        {
            cin>>arr[i];
        }

        int sum=0,cum=0;
        for(i=0; i<n-1; i++)
        {
            if(arr[i]>0)
            {
                sum = sum+arr[i];
            }
            else{
                cum = cum+arr[i];
            }
        }

        int k = sum+cum;
        cout<<-k<<endl;


    }

    return 0;
}
