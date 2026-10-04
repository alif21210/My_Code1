#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        string s;
        cin>> s;
        
        vector<int>v;
        
        int i,sum = 0;
        
        for(i=0; i<s.size(); i++)
        {
            if(s[i] != '+')
            {
                int k = s[i] - '0';
                v.push_back(k);
            }
        }
        
        sum = v[0] + v[1];
        
        cout << sum << endl;
    }
    return 0;
}