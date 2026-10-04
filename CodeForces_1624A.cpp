#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i;
        cin >> n;

        int arr[n];
        
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int a = *max_element(arr, arr+n);
        int b = *min_element(arr, arr+n);

        cout<<a-b<<endl;
        
    }

    return 0;
}
