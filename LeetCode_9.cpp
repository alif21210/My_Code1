// class Solution {
// public:
//     bool isPalindrome(int x) {
//        string s = to_string(x);
//        int i;
//        bool m = true;
//        for(i=0; i<s.size()/2; i++)
//        {
//             if(s[i] != s[s.size()-1-i])
//             {
//                 m = false;
//                 break;
//             }
//        }

//        if(m==true)
//        {
//         return true;
//        }
//        else{
//         return false;
//        } 
//     }
// };