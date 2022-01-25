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
    ListNode* reverseList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            st.push(cur);
            cur=cur->next;
        }
        ListNode* ret;
        if(st.size())
        {
            ret=st.top();
            st.pop();
            cur=ret;
        }
        else
            return NULL;
        while(st.size())
        {
            cur->next=st.top();
            cur=st.top();
            st.pop();
            cur->next=NULL;
        }
        return ret;
    }
};
