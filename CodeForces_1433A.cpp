#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int m = n%10;

        m = m*10 -10;

        string mas = to_string(n);
        int k = mas.size();
        k = (k*(k+1))/2;

        m = m+k;

        cout<<m<<endl;

    }

    return 0;
}