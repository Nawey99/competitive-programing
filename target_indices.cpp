class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        vector<int>tar;
        for (int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                swap(nums[i],nums[j]);
            }
        }
        for (int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            tar.push_back(i);
        }
        return tar;
    }
};