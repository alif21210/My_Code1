#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        long long sum=0,cum=0;
        cin>>n;

        vector<int>v1,v2;

        if(n==2)
        {
            cout<<"NO"<<endl;
        }
        else{
            n = n/2;
            if(n%2 != 0)
            {
                cout<<"NO"<<endl;
            }
            else{
                int r=2,q=1,i;

                cout<<"YES"<<endl;
                
                for(i=0; i<n; i++)
                {
                    sum = sum + r;
                    cum = cum + q;

                    v1.push_back(q);
                    v2.push_back(r);

                    r += 2;
                    q += 2;
                }

                cum = cum+q;
                v1.push_back(q);
                int f = cum - sum;
                
                for(i=0; i<v2.size(); i++)
                {
                    cout<<v2[i]<<" ";
                }
                for(i=0; i<v1.size(); i++)
                {
                    if(v1[i] == f)
                    {
                        continue;
                    }
                    if(i== v1.size()-1)
                    {
                        cout<<v1[i];
                    }
                    else{
                        cout<<v1[i]<<" ";
                    }

                }

                cout<<endl;
            }
        }
    }
    
    return 0;
}