#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int n,i;
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int mini = *min_element(arr,arr+n);
        int flag = 0;

        for(i=0; i<n; i++)
        {
            if(arr[i] != mini)
            {
                flag = flag + (arr[i] - mini);
            }
        }

        cout << flag << endl;

    }
    return 0;
}