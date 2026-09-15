/*
    class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int i,j,maxi=0;

        for(i=0; i<arr.size(); i++)
        {
            int sum = 0;
            for(j=0; j<arr[i].size(); j++)
            {
                sum = sum + arr[i][j];
            }

            if(maxi<sum)
            {
                maxi = sum;
            }
        }

        return maxi;
    }
};
*/