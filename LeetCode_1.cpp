/*
    class Solution {
public:
    vector<int> twoSum(vector<int>& v, int tar) {

        vector<int>q;
        int i,r=-1,l=-1;

        for (i = 0; i < v.size(); i++)
        {
            int m = tar - v[i];
            auto it = find(v.begin()+i+1, v.end(), m);

            if (it != v.end())
            {
                r = it - v.begin();
                l = i;

                return {l, r};
            }
        }

        return {};

    }
};

*/