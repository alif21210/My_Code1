#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin>>s;
        int i=0;

        vector<char>v;
        v.push_back(s[i]);

        for(i=1; i<s.size()-1; i++)
        {
            if(i%2 != 0)
            {
                v.push_back(s[i]);   
            }
        }

        v.push_back(s[s.size()-1]);

        for(i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    

    return 0;
}