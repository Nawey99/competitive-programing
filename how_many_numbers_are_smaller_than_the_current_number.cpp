class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int>out;
        for(int i=0;i<nums.size();i++)
        {
            int x=0;
            for (int j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                {
                    x++;
                }
            }
            out.push_back(x);
        }
        return(out);
    }
};