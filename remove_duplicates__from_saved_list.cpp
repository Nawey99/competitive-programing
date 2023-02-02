/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *fast=NULL;
        ListNode *slow=NULL;
        if(head==NULL || head==NULL)
        return head;
        else
        {
            fast=head;
            slow=head;
            fast=slow->next;
        }  
        while(1 && slow->next)
        {
            if(fast->val == slow->val)
            {
                if(fast->next == NULL)
                {
                slow->next=NULL;
                break;
                }
                slow->next=fast->next;
            }
            else
            {
                slow=fast;
                if(fast->next == NULL)
                break;
            }
            fast=fast->next;
        }
        return head;
    }
};