// class Solution {
// public:
//     int addDigits(int num) {
        
//         int sum;
        
//         if(num == 0)
//         {
//             return 0;
//         }

//         while(1)
//         {
//             sum = 0;
//             while(num != 0)
//             {
//                 int m = num%10;
//                 sum = sum + m;
//                 num = num/10; 
//             }

//             if(sum<10)
//             {
//                 break;
//             }
//             else{
//                 num = sum;
//             }
//         }

//         return sum;
        
//     }
// };