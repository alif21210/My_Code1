// class Solution {
// public:
//     int countDigits(int num) {
//         int m = num;
//         int count = 0;

//         while(m != 0)
//         {
//             int k = m%10;

//             if(num%k == 0)
//             {
//                 count++;
//             }

//             m = m/10;
//         }

//         return count;
//     }
// };