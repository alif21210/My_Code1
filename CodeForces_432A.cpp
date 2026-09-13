#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,k,count=0;
    cin >> t >> k;

    int arr[t];

    for(i=0; i<t; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+t);

    for(i=0; i<t; i++)
    {
        if(arr[i]+k <= 5)
        {
            count++;
        }
        else{
            break;
        }
    }
    
    cout<<count/3<<endl;


    return 0;
}