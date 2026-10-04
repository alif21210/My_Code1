// class Solution {
// public:
//     int mySqrt(int x) {
//         if(x==0)
//         {
//             return 0;
//         }
//         double g = x;
//         for(int i=0; i<20; i++)
//         {
//             g = (g + (x/g))/2.0;
//         }
        
//         return static_cast<int>(g);
//     }
// };