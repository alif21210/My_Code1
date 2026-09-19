/*
    class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        int l=0, r=(n*2)/2, i;

        for(i=0; i<n*2; i++)
        {
            if(i == 0)
            {
                v.push_back(nums[l]);
                l++;
            }
            else if(i%2 == 0)
            {
                v.push_back(nums[l]);
                l++;
            }
            else{
                v.push_back(nums[r]);
                r++;
            }
        }

        return v;

    }
};
*/