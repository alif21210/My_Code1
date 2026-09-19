#include <iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
   
    while(t--)
    {
        string s;
       
        cin>>s;
        int flag =0;
        for(i=0; i<s.size()/2; i++)
        {
            if(s[i] != s[s.size()/2 +i])
            {
                flag++;
                break;
            }
        }
       
        if(s.size()%2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else{
           
            if(flag == 0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
