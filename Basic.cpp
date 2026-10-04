#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";
    return 0;
}

// cout<<showpoint;

// cout<<noshowpoint;

// cout<<fixed<<setprecision(2)<<x; || dosomik er pore dui ghor || #include<iomanip> use korte hobe

// cout<<setw();  || gap diye output bosanor jonno || #include<iomanip>
// toupper(char) ABC
// tolower(char) abc
// getch(); || #include<conio.h>
// gets(name)  || #include<stdio.h>  || space soho name print korar jonno

// #include<cstring>
// Strcmp = compare ||  ==0 true
// Strcpy = copy
// Strcat = jog kora
// Strlen = lenght
// strchr(str, 'a') = string search
// strupr = string er sob gula k upper latter covert kore
// strlwr = string er sob gula k lower latter covert kore
//  while(cin>>m) || EOF
// size_t এটা সাধারণত array বা string-এর size এবং index সংরক্ষণ করার জন্য ব্যবহার করা হয়।
/*
    kono search kora string er modhay
    if(s.find("...") != string::npos)
        {
            cout<<"2"<<endl;
        }
*/
/*
char k int a convert

    char ch = '7';
    int x = ch - '0';

    cout << x;   // Output: 7
*/

/* int k char a convert

    int x = 7;
    char ch = x + '0';

    cout << ch;   // Output: 7
*/

/* int/flaot k string a convert

    float k = 12.5;
    string s = to_string(k);
    cout << s;

*/

/* string k float

    string k = "12.5";
    float x = stof(k);
    cout << x;
*/

/*
    ~gcd use~
    int g = __gcd(a, b);

    ~round function er kaj~
    cout << round(4.3);
    4.3 ke 4 convert kora

    find function er use
    if(s.find('i') != string::npos)
    {
        count++;
    }


    ~max(),min() use~

    int n = max(a,b);
    int n = min(a,b);

    int maximum = *max_element(arr, arr + n);
    int minimum = *min_element(arr, arr + n);

    int index = max_element(arr, arr + n) - arr;
    int index = min_element(arr, arr + n) - arr;


    ~int ke binary te convert~
    
    bitset<8> binary(num);
    tarpor ei binary ke string convert kora jabe to_string(); function diye


*/