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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry=false;
        ListNode* cur=new ListNode;
        ListNode* head=cur;
        while(1){
            cur->next=new ListNode;
            int n1=0,n2=0;
            if(l1!=NULL)
            { 
                n1=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                n2=l2->val;
                l2=l2->next;
            }
            if(carry){
                cur->val=n1+n2+1;    
            }
            else
            {
                cur->val=n1+n2;
            }
            if(cur->val>=10)
            {
                cur->val-=10;
                carry=true;
            }
            else
            {
                carry=false;
            }
            if(l1!=NULL || l2!=NULL)
            {
                  cur=cur->next;
            }
            else
            {
                if(carry)
                {
                    cur->next->val=1;
                    cur->next->next=NULL;
                }
                else
                {
                    delete cur->next;
                    cur->next=NULL;
                }
                break;
            }
        } 
        return head;
    }
};
