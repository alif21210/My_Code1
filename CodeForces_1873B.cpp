#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        long long multi=1;
        cin>>n;

        int arr[n],i;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int index = min_element(arr, arr+n) - arr;

        arr[index] += 1;

        for(i=0; i<n; i++)
        {
            multi = multi*arr[i];
        }

        cout<<multi<<endl;

    }

    return 0;
}