#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {


        
        int i;

        int arr[4];
        for(i=0; i<4; i++)
        {
            cin >> arr[i];
        }

        sort(arr,arr+4);
        int flag = 0;

        for(i=0; i<4-1; i++)
        {
            if(arr[i] != arr[i+1])
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