#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    
    int i=1,count=0,j,cum=0;
    
    while(1)
    {
        
        int sum=0;
        
        sum = (i*(i+1))/2;
        cum = cum + sum;
        if(cum>m)
        {
            break;
        }
        
        count++;
        
        i++;
        
    }
    cout<<count<<endl;
    
    return 0;
}