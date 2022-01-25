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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1,*l2,*rethead,*ret;
        l1=list1;
        l2=list2;
        rethead=NULL;
        ret=rethead;
        while(l1!=NULL||l2!=NULL)
        {
            if(l1==NULL)
            {
                if(ret!=NULL)
                {
                    ret->next=l2;
                    ret=ret->next;
                    l2=l2->next;
                }
                else
                {
                    ret=l2;
                    rethead=ret;
                    l2=l2->next;
                }
                continue;
            }
            if(l2==NULL)
            {
                if(ret!=NULL)
                {
                    ret->next=l1;
                    ret=ret->next;
                    l1=l1->next;
                }
                else
                {
                    ret=l1;
                    rethead=ret;
                    l1=l1->next;
                }
                continue;
            }
            //both not null
            if(l1->val<=l2->val)
            {
                if(ret!=NULL)
                {
                    ret->next=l1;
                    ret=ret->next;
                    l1=l1->next;
                }
                else
                {
                    ret=l1;
                    rethead=ret;
                    l1=l1->next;
                }
            }
            else
            {
                if(ret!=NULL)
                {
                    ret->next=l2;
                    ret=ret->next;
                    l2=l2->next;
                }
                else
                {
                    ret=l2;
                    rethead=ret;
                    l2=l2->next;
                }
            }
            
        }
        return rethead;
    }
};
