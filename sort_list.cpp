class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* current=head;
        ListNode* node= new ListNode(0);
        vector<int>v1;
    
        while(current)
        {
            v1.push_back(current->val);
            current=current->next;
        }
        sort(v1.begin(),v1.end());
        int x=0;
        ListNode* node1=node;
        while(x<v1.size())
        {
            if(node==NULL)
            node->val=v1[x];

            else
            {
                
                while(node1->next)
                node1=node1->next;
                ListNode* p=new ListNode(v1[x]);
                node1->next=p;
                
            }

        x++;
        }
        head=node;
        return head->next;
    }
};