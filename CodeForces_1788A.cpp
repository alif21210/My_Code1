#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,i,count =0;
        cin>>n;
        int arr[n];

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==2)
            {
                count++;
            }
            
        }
        int bount = 0,flag=0,k=-1;

        for(i=0; i<n; i++)
        {
            if(arr[i]==2)
            {
                bount++;
                count--;
            }

            if(count == bount)
            {
                flag++;
                k = i;
                break;
            }
        }

        if(flag==0)
        {
            cout<<k<<endl;
        }
        else{
            cout<<k+1<<endl;
        }

        

        

        
        

    }

    return 0;
}
