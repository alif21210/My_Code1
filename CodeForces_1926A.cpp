#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m;
    cin>>m;
    

    while(m--)
    {

       string s;
       cin>>s;
       
       int au=0,bu=0;
       int i,j;
       
       for(i=0; i<s.size(); i++)
       {
          if(s[i] == 'A')
          {
              au++;
          }
          else{
              bu++;
          }
       }
       
       if(au>bu)
       {
           cout << "A" << endl;
       }
       else{
           cout << "B" << endl;
       }
        
    }
    
    
    return 0;
}