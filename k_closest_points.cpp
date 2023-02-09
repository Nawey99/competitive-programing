class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>k_close;
        int dist;
        priority_queue<pair<int,pair<int,int>>>pque;
        if (points.size()==0)
        return points;

        for(int i=0;i<points.size();i++)
        {
            dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            if(pque.size()<k)
            pque.push({dist,{points[i][0],points[i][1]}});
            else
            {
                if(dist<pque.top().first)
                {
                    pque.pop();
                    pque.push({dist,{points[i][0],points[i][1]}});
                }
            }
        }
        while(!pque.empty())
        {
            k_close.push_back({pque.top().second.first,pque.top().second.second});
            pque.pop();
        }
        return k_close;
    }
};