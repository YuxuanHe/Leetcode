/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dump = new ListNode(-1);
        dump->next = head;
        ListNode* p = head;
        ListNode* pre = dump;
        while(p && p->val < x) {
            pre = p;
            p = p->next;
        }
        if(p != NULL) {
            ListNode* insert_pos = pre;
            pre = p;
            p = p->next;
            while(p) {
                if(p->val < x) {
                    ListNode* temp = p->next;
                    pre->next = p->next;
                    p->next = insert_pos->next;
                    insert_pos->next = p;
                    insert_pos = insert_pos->next;
                    p = temp;
                }
                else {
                    pre = p;
                    p = p->next;
                }
            }
        }
        return dump->next;
    }
};
