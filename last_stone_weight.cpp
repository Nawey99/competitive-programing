class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pque;
        int v1=stones.size();
        int first,second;
        for(int i=0;i<v1;i++)
        pque.push(stones[i]);
        while(v1>1)
        {
            first=pque.top();
            pque.pop();
            second=pque.top();
            pque.pop();
            v1-=2;
            if((first-second)>0)
            {
            pque.push(first-second);
            v1+=1;
            }
        }
        if(!pque.empty())
        return pque.top();

        return 0;

    }
};