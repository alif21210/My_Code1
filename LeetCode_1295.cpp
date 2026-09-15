/*

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i,count=0;

        for(i=0; i<nums.size(); i++)
        {
            size_t size = to_string(nums[i]).size();

            if(size%2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};

*/