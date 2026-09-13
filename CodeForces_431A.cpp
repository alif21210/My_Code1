#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0; 
    int arr[4];

    for(i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    string s;
    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        int x = s[i] -'0';
        count = count + arr[x-1];
    }

    cout<<count<<endl;
    return 0;
}