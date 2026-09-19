// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {

//        int i,total=0, left=0;

//        for(int x : nums)
//        {
//             total += x;
//        } 

//        for(i=0; i<nums.size(); i++)
//        {
//             int right = total - left - nums[i];

//             if(left == right)
//             {
//                 return i;
//             }

//             left += nums[i];
//        }

//        return -1;
//     }
// };
