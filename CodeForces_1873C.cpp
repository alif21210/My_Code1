#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        char arr[11][11];
        int i,j;

        for(i=0; i<=10; i++)
        {
            for(j=0; j<=10; j++)
            {
                if(i==0 || j==0)
                {
                    arr[i][j] ='&';
                }

                else {
                    cin>>arr[i][j];
                }
            }
        }
        
        
        int a1=0,a2=0,a3=0,a4=0,a5=0;
        
        for(i=1; i<=10; i++)
        {
            for(j=1; j<=10; j++)
            {
                if(arr[i][j] == 'X')
                {
                    if(i== 1 || i==10 || j==1 || j==10)
                    {
                         a1++;
                    }
                    else if(i== 2 || i==9 || j==2 || j==9)
                    {
                         a2++;
                    }
                    else if(i== 3 || i==8 || j==3 || j==8)
                    {
                         a3++;
                    }
                    else if(i== 4 || i==7 || j==4 || j==7)
                    {
                         a4++;
                    }
                    else if(i== 5 || i==6 || j==5 || j==6)
                    {
                         a5++;
                    }
                    
                }
            }
            
            
        }
        
        cout <<(a1*1)+(a2*2)+(a3*3)+(a4*4)+(a5*5)<< endl;
    }
    
    return 0;
}