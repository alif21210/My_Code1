#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,i,multi=1;
        cin>>n;
        int arr[n];

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            multi = multi*arr[i];
        }

        int culti =1,k=-1;
        bool flag = false;

        for(i=0; i<n; i++)
        {
            culti = culti*arr[i];
            multi = multi/arr[i];
            if(culti == multi)
            {
                flag = true;
                k=i;
                break;
            }
        }

        if(flag == true)
        {
            cout<<k+1<<endl;
        }
        else{
            cout<<k<<endl;
        }
        

    }

    return 0;
}
