#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j, count = 0;
        cin >> n;

        string s;
        cin >> s;

        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != '&')
            {
                for (j = i + 1; j < s.size(); j++)
                {
                    if (s[i] == s[j])
                    {
                        s[j] = '&';
                        count++;
                    }
                }
            }
        }

        cout<<((n-count)*2) + count << endl;
    }

    return 0;
}