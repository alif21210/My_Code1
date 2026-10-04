#include<bits/stdc++.h> // ei header file use kora hoiche vector function gulo use korar jonno
using namespace std;
int main()
{
    
    // Declare vector 
    vector<int>v;
    // vector<int> arr(n); array decleartion 

    //input vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //printing vector value
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    

    cout<<v.front()<<endl; //first value print kore
    cout<<v.back()<<endl; //last value print kore

    v.clear(); //vector khali kore dey
    cout<<v.size()<<endl;

    if(v.empty()) // v.empty() vector empty ache kina check kora
    cout<<"Empty"<<endl;
    else
    cout<<"Not empty"<<endl;

    // v.pop_back(); vector er last Element delete kora
    
    // v.erase(v.begin()+0); 0 number index er value delete korbe
    // v.erase(v.begin()+2,v.end()); 2 number index theke last index porjont sob value delete kore dibe
    
    //v.insert(v.begin()+0,1); 1 number value 0 number index er age add korbe
    //v.insert(v.begin()+2,3,1); 1 number value 2 number index er pore 3 bar add korbe
    //v.find(v.begin(), v.end(), 30); 30 find korar jonno
    

    /*vector swaping
    let,
        v1 ekta vector v2 ekta vector 
        v1 = 1 2 3
        v2 = 10 20 30

        swap(v1,v2);

        swap() function use korar por v1 ar v2 man hobe
        v1 = 10 20 30
        v2 = 1 2 3
    */

    /*vector sorting
    let,
        v1 ekta vector  
        v1 = 13 21 3 4 11
        
        sort(v1.begin(),v1.end());
        afer sorting
        
        v1 = 3 4 11 13 21
    */

    /*vector reversing
    let,
        v1 ekta vector  
        v1 = 13 21 3 4 11
        
        reverse(v1.begin(),v1.end());
        afer reserving
        
        v1 = 11 4 3 21 13
    */

    /*vector iteration
        
        vector<int>v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);

        vector<int>::iterator it;
        for(it=v.begin(); it != v.end(); it++)
        {
            cout<<*it<<" ";
        }

    */
   
   //int mx = *max_element(arr, arr + n); max value 
   //int mn = *min_element(arr, arr + n); min value

   //count(arr, arr+n, 5); koybar 5 ache count kore

   /*

    vector modhay kono string khuja
    if(find(v.begin(),v.end(), "s") != v.end())
    {
        break;
    }

    vector modhay kono number khuja
    if(find(v.begin(),v.end(), m) != v.end())
    {
        break;
    }

   */

   /*
        same value last niye jay
        
        partition(arr, arr + a, [&](int x)
        {
            return count(arr, arr + a, x) == 1;
        });
   
   */
    
    return 0;
}