#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int m,n;
        cin >> m>>n;
        
        if(m>n)
        {
            cout<<n<<" "<<m<<endl;
        }
        else{
            cout<<m<<" "<<n<<endl;
        }
    }
    return 0;
}