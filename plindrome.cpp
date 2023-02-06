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
    bool isPalindrome(ListNode* head) {
        vector<int>v1;
        int flag=0;
        while(head)
        {
            v1.push_back(head->val);
            head=head->next;
        }
        int x=v1.size()-1;
        int y=x/2;
        for (int i=0;i<=y;i++)
        {
            if(v1[i]!=v1[x-i])
            return false;
        }
        return true;
    }
};