// class Solution {
// public:
//     int hammingWeight(int n) {
//         bitset<32>binary(n);
//         string wr = binary.to_string();
//     int count = 0;

//         for(int i=0; i<wr.size(); i++)
//         {
//             if(wr[i] == '1')
//             {
//                 count++;
//             }
//         }

//         return count;
//     }
// };