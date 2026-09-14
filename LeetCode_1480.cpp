/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,sum =0;
        vector<int>v;
        for(i=0; i<nums.size(); i++)
        {
            sum = sum + nums[i];
            v.push_back(sum);
        }

        return v;
    }
};
*/