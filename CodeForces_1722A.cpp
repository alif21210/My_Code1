#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n,count=0,flag=0;
        cin>>n;
        string s;
        cin>>s;

        if(s.size() == 5)
        {
            if(s.find('T') != string::npos)
            {
                count++;
            }

            if(s.find('i') != string::npos)
            {
                count++;
            }

            if(s.find('m') != string::npos)
            {
                count++;
            }

            if(s.find('u') != string::npos)
            {
                count++;
            }

            if(s.find('r') != string::npos)
            {
                count++;
            }

            
        }

        if(count == 5)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}