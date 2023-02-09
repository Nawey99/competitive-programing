class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pque;

        if(nums.size()==0)
        return 0;

        for(int i=0;i<nums.size();i++)
        pque.push(nums[i]);

        for(int i=1;i<k;i++)
        pque.pop();

        return pque.top();
        
    }
};