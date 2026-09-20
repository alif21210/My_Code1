#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {


        int i,n;
        cin>>n;

        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr,arr+n);
        int flag = 0;

        for(i=0; i<n-1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                flag++;
                break;
            }
        }

        if(flag == 0)
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    return 0;
}