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
    vector<int> nextLargerNodes(ListNode* head) {
         vector<int>ans;
        while(head){
            int value = 0;
            ListNode* temp = head->next;
            
            while( temp){
                if (temp->val > head->val){
                    value = temp->val;
                    break;
                }
                temp = temp->next;
            }

            head= head->next;
            ans.push_back(value);
        }
        return ans;
    }
};