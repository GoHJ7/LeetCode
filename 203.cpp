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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prehead=new ListNode;
        ListNode* prev=prehead;
        prehead->next=head;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            if(cur->val==val)
            {
                prev->next=cur->next;
                cur=cur->next;
                continue;
            }
            prev=cur;
            cur=cur->next;
            
        }
        return prehead->next;
    }
};
