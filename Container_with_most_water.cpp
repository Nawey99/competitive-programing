class Solution {
public:
    int maxArea(vector<int>& height) {
        int64_t min_height=height[0];
        int64_t max_height=height[height.size()-1];
        int64_t min_idx=0;
        int64_t max_idx=height.size()-1;
        if (max_height<min_height)
        {
            min_height=max_height;
            min_idx=max_idx;
            max_height=height[0];
            max_idx=0;
        }
        int64_t w=height.size()-1;
        int64_t max_area = min_height*w;
        
        while (w>0)
        {
         int idx=min_idx;
            while(height[idx]<=min_height)
            {
                if (min_idx<max_idx)
                    idx++;
                else
                    idx--;
                w--;
                if (w<1)
                    break;
            }
            if (height[idx]>max_height)
            {
                min_height=max_height;
                min_idx=max_idx;
                max_idx=idx;
                max_height=height[idx];
            }
            else
            {
                min_idx=idx;
                min_height=height[idx];
            } 
            max_area = max(max_area ,w*min_height);
        }
        return max_area;
        
    }
};
