#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,i,j;
        cin>>a;
        int arr[a];
        
        for(i=0; i<a; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+a);

        vector<int>v1,v2;
        v2.push_back(arr[a-1]);

        for(i=0; i<a-1; i++)
        {

            if(arr[a-1] == arr[i])
            {
                v2.push_back(arr[i]);    
            }
            else{
                v1.push_back(arr[i]);
            }
        }
                        

        int flag = 1;

        for(i=1; i<a; i++)
        {
            if(arr[0]==arr[i])
            {
                flag++;
            }
        }

        if(flag == a)
        {
            cout<<-1<<endl;
        }

        else{

            cout<<v1.size()<<" "<<v2.size()<<endl;

            for(i=0; i<v1.size(); i++)
            {
                cout<<v1[i]<<" ";
            }

            cout<<endl;

            for(i=0; i<v2.size(); i++)
            {
                cout<<v2[i]<<" ";
            }
        }

    }

    return 0;
}
