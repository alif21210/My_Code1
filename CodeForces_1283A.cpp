#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int m,s;
        cin >> m >> s;
        

        m = (23-m)*60;
        s = 60-s;
        
        int ans = m+s;
        
        cout << ans << endl;

    }
    return 0;
}