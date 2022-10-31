class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int ans=nums.size();
        int sum=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            
            while(target<=sum)
            {
                ans=min(ans,j-i);
                sum-=nums[i];
                i++;
            }
            j++;
        }
         if(ans==nums.size())
            return 0;
        return ans+1;
    }
};
